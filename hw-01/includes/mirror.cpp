#include <cctype>
#include <queue>
#include <stack>
#include <string>
using namespace std;

bool mirror(const string a, const string b) {
  stack<char> stack;
  queue<char> queue;

  for (size_t i = 0; i < (a.length() / sizeof(char)); i++) {
    if (isalnum(a.at(i))) {
      stack.push(tolower(a.at(i)));
    }
  }
  for (size_t i = 0; i < (b.length() / sizeof(char)); i++) {
    if (isalnum(b.at(i))) {
      queue.push(tolower(b.at(i)));
    }
  }
  while (!stack.empty() || !queue.empty()) {
    char temp_stack = stack.top();
    stack.pop();
    char temp_queue = queue.front();
    queue.pop();
    if (temp_queue != temp_stack) {
      return false;
    }
  }
  return true;
}