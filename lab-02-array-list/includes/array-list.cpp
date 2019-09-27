#include "array-list.h"
#include <iostream>
#include <stdexcept>

ArrayList::ArrayList() { count = 0; }

void ArrayList::prepend(int value) { insertAt(value, 0); }

void ArrayList::insertAt(int value, int index) {
  for (size_t i = count; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[index] = value;
  count++;
}

void ArrayList::append(int value) {
  if (this->length() < CAPACITY) {
    arr[count] = value;
    count++;
  } else {
    throw std::out_of_range("The maximum length is 100!");
  }
}

int ArrayList::get(int index) const {
  if (index < 0 || index >= this->length()) {
    throw std::out_of_range(
        "The index you are trying to access is not in the array.");
  }
  return this->arr[index];
}

int ArrayList::find(int value) const {
  for (size_t i = 0; i < this->length(); i++) {
    if (this->get(i) == value)
      return i;
  }
  return -1;
}

int ArrayList::length() const {
  /* size_t length = 0;
   for (size_t i = 0; i < CAPACITY; i++) {
     if (arr[i] != 0) {
       length++;
     }
   }
 */
  return count;
}
