#include "heap.h"

using namespace std;

Heap::Heap() {
  memset(this,0, sizeof(Heap));
  lastElement = 0;
}

void Heap::add(int data) {
  storage[lastElement] = data;
  int index = lastElement;
  while(data > ceil
  lastElement++;
}

void Heap::removeLargest() {

}

void Heap::removeAll() {

}

void Heap::print(int depth, int index) {
  depth++;
  int left = storage[index*2 + 1];
  if(index*2+1 > lastElement-1) {
    return;
  }
  for(int i = 0; i < depth; i++) {
    cout << "\t\t";
  }
  cout << left << endl;

  print(depth, index*2+1);

  if(index == 0) {
    cout << storage[index] << endl;
  }

  int right = storage[index*2 + 2];
  if(index*2+2 > lastElement-1) {
    return;
  }
  for(int i = 0; i < depth; i++) {
    cout << "\t\t";
  }
  cout << right << endl;

  print(depth, index*2+2);

  
  
}
