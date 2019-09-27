#include "deque.h"
#include <iostream>

using namespace std;
int main() {
  /*
  Deque d;
  for (int i = 0; i < Deque::CAPACITY; i++) {
    d.push_back(i);
  }
  if (d.is_empty() == false) {
    std::cout << "not empty" << std::endl;
  }
  if (d.is_full() == false) {
    std::cout << "not full" << std::endl;
  }
  if (d.is_full() == true) {
    std::cout << "full" << std::endl;
  }
  int v = d.pop_front();
  std::cout << "V= " << v << std::endl;
  */
  //////////////////////////////////////////////////////////////////////////////
  Deque d;
  for (int i = 0; i < Deque::CAPACITY; i++) {
    d.push_front(i);
  }
  if (d.is_empty() == false) {
    std::cout << "not empty" << std::endl;
  }
  if (d.is_full() == true) {
    std::cout << "full" << std::endl;
  }
  int v = d.pop_front();
  std::cout << "V= " << v << std::endl;
  // You can fill in whatever you want here, you grade will be based on the
  // test cases.
}