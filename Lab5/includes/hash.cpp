#include "hash.h"
#include <iostream>
#include <math.h>
#include <stdexcept>
#include <vector>
Hash::Hash() { table.resize(size_prime); }

// inserts a key into hash table
void Hash::insert(int x) {
  int hashValue = hashFunction(x);
  if (table[hashValue].size() > sqrt(size_prime)) {
    rehash();
  }
  table[hashValue].push_back(x);
}

// removes a key from hash table
void Hash::remove(int x) {
  int hashValue = hashFunction(x);
  for (auto i = 0; i < table[hashValue].size(); i++) {
    if (table[hashValue][i] == x) {
      table[hashValue].erase(table[hashValue].begin() + i);
    }
  }
}

bool Hash::find(int x) {
  int hashValue = hashFunction(x);
  for (auto i = 0; i < table[hashValue].size(); i++) {
    if (table[hashValue][i] == x)
      return true;
  }
  return false;
}

void Hash::rehash() {
  int old_size = size_prime;
  std::vector<std::vector<int>> table_temp;
  // copy the original vector and clear it
  table_temp.resize(old_size);
  for (int i = 0; i < old_size; i++) {
    table_temp[i] = table[i];
  }
  table.erase(table.begin(), table.end());
  // now iterate trough the vector and rehash it into the new one
  size_prime = nextSize();
  table.resize(size_prime);
  for (auto i = 0; i < table_temp.size(); i++) {
    for (auto j = 0; j < table_temp[i].size(); j++) {
      int temp = table_temp.at(i).at(j);
      insert(temp);
    }
  }
}

int Hash::nextSize() { return size_prime = nextPrime(size_prime); }

int Hash::hashFunction(int x) { return abs(x % size_prime); }

bool Hash::isPrime(int n) {
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

int Hash::nextPrime(int N) {
  int prime = N;
  bool found = false;

  while (!found) {
    prime++;

    if (isPrime(prime))
      found = true;
  }

  return prime;
}
void Hash::print() {
  for (size_t i = 0; i < table.size(); i++) {
    for (size_t j = 0; j < table[i].size(); j++) {
      std::cout << "Vector number " << i << " " << table[i][j] << " ";
    }
    std::cout << " -- " << std::endl;
    ;
  }
}