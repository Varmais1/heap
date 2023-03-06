#include <iostream>
#include <cstring>

class Heap {
 public:
  //constructor
  Heap();
  //add function
  void add(int data);
  //removes the largest value in the heap
  int removeLargest();
  //removes all values while printing them
  void removeAll();
  //prints all values
  void print(int depth, int index);
  //array where heap is stored
  int storage[100];
  //size of the heap
  int lastElement;
};
