#include "mirror.h"
#include <iostream>

using namespace std;
int main() {
  string first, second;
  cout << "Enter two strings to determine if they are \"mirrors\"" << endl;
  cout << "First:" << endl;
  getline(cin, first);
  cout << "Second:" << endl;
  getline(cin, second);
  if (mirror(first, second)) {
    cout << "The two strings are \"mirrors\"" << endl;
  } else {
    cout << "Not mirrors" << endl;
  }
  return 0;
}