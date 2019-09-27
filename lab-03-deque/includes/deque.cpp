#include "deque.h"
#include <stdexcept>

Deque::Deque() {
  this->count = 0;
  this->front = 0;
  this->back = 0;
}

void Deque::push_back(int value) {
  if (this->is_full()) {
    throw std::length_error("The deque has reached the max limit!");
  }
  arr[back] = value;
  count++;
  back++;
  if (back == CAPACITY) {
    back = 0;
  }
}

// insert at front same as above 0
void Deque::push_front(int value) {
  if (this->is_full()) {
    throw std::length_error("The deque has reached the max limit!");
  }
  if (front == 0) {
    front = CAPACITY;
  } // goes to arr[100]
  front--;
  arr[front] = value;
  count++;
}

int Deque::pop_back() {
  if (this->is_empty()) {
    throw std::length_error("No contents");
  }
  back--;
  int data = this->arr[back];

  count--;
  if (back == 0) {
    back = CAPACITY;
  }
  return data;
}

int Deque::pop_front() {
  if (this->is_empty()) {
    throw std::length_error("No contents");
  }
  int temp = arr[front];
  count--;
  front++;
  if (front == CAPACITY) {
    front = 0;
  }
  return temp;
}

bool Deque::is_full() const { return this->count == this->CAPACITY; }

bool Deque::is_empty() const { return this->count == 0; }
