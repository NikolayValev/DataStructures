#include "sorted-list.h"
#include <iostream>
#include <stdexcept>

SortedList::SortedList() { count = 0; }

void SortedList::insert(int value) {
  for (size_t i = count; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[index] = value;
  count++;
}

int SortedList::get(int index) const {
  if (index < 0 || index >= this->length()) {
    throw std::out_of_range(
        "The index you are trying to access is not in the array.");
  }
  return this->arr[index];
}

int SortedList::find(int value) const {
  for (size_t i = 0; i < this->length(); i++) {
    if (this->get(i) == value)
      return i;
  }
  return -1;
}

int SortedList::length() const { return count; }
