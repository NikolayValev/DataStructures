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
  mirror(first, second);
  // Ask the user for two strings, and then call
  // mirror.  Tell the users whether or not the
  // two strings are mirrors of eachother.
}