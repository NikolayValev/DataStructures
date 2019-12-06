#include <vector>
class Hash {
public:
  Hash();
  // inserts a key into hash table
  void insert(int x);
  // removes a key from hash table
  void remove(int key);
  bool find(int x);
  void print();

private:
  int size_prime = 13;
  int nextSize();
  // hash function to map values to key
  void rehash();
  int hashFunction(int x);
  bool isPrime(int n);
  int nextPrime(int N);
  std::vector<std::vector<int>> table;
};
