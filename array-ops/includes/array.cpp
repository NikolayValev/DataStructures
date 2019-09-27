#include "array.h"
int find(int values[], int count, int key) {
for (int i = 0; i < count; i++) {
  if (values[i]==key){return i;}
}

return -1;
}
bool append(int values[], int &count, int size, int value) {
  if (count < size){
    values[count] = value;
    count++;
  }
  else {
    return false;
  }
}