#include "hash.h"
#include <iostream>
int main() {
  Hash h;
  h.insert(16);
  h.insert(26);
  h.insert(36);
  h.insert(46);
  h.insert(56);
  h.insert(66);
  h.insert(76);
  h.insert(86);
  h.insert(96);
  h.insert(106);

  h.insert(29);
  h.insert(42);

  h.insert(55);

  h.insert(68);

  h.print();
}