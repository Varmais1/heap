#include "heap.h"

using namespace std;

//constructor
Heap::Heap() {
  memset(this,0, sizeof(Heap));
  lastElement = 0;
}

//set the new datapoint to the last node in the heap, then while it is greater than its parent, swap it and its parent, then increment last element by 1
void Heap::add(int data) {
  storage[lastElement] = data;
  int index = lastElement;
  while(data > storage[index/2 + (index%2) -1] && index > 0) {
    swap(storage[index],storage[index/2 + (index%2) -1]);
    index = index/2 + (index%2) -1;
    //cout << "index: " << index << endl;
  }
  lastElement++;
}

//deletes largest element
int Heap::removeLargest() {
  int index = 0;
  //in case there isn't a heap
  if(lastElement == 0) {
    cout << "The heap is currently empty" << endl;
    return 1;
  }
  //swap the first and last element, and print out the former largest element
  swap(storage[0],storage[lastElement - 1]);
  cout << "Deleted element: " << storage[lastElement - 1] << endl;
  //delete the last element
  storage[lastElement - 1] = 0;
  //decrease the size o the heap
  lastElement--;
  //cout << "lastElement: " << lastElement << endl;
  //while the element is smaller than its children, swap it with the bigger child
  while(storage[index] < storage[index*2 + 1] || storage[index] < storage[index*2 + 1] && index < lastElement) {
    if(storage[index] < storage[index*2 + 1] && storage[index*2+1] >= storage[index*2+2]) {
      swap(storage[index],storage[index*2+1]);
      index = index*2 + 1;
    }
    else if(storage[index] < storage[index*2 + 2] && storage[index*2+2] > storage[index*2+1]) {
      swap(storage[index],storage[index*2+2]);
      index = index*2 + 2;
    }
  }
  return 0;
}

//call remove largest until the heap is empty
void Heap::removeAll() {
  while(removeLargest() != 1);
}

void Heap::print(int depth, int index) {
  if(lastElement == 0) {
    //if the heap is empty, say that
    cout << "The heap is empty." << endl;
    return;
  }
  //increase the depth of recursion tracking variable
  depth++;
  //if the left child index is valid, call the print function for it
  if(index*2 + 1 <= lastElement-1) {
    int left = index*2 + 1;
    print(depth, left);
  }
  //for the appropriate depth, print out a tab and a space
  for(int i = 0; i < depth-1; i++) {
    cout << "\t ";
  }
  //print out the element
  cout << storage[index] << endl;

  //if the right index is valid, call the print function for it
  if(index*2 + 2 <= lastElement - 1) {
    int right = index*2 + 2;
    print(depth, right);
  }

  
  
}
