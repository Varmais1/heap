#include <iostream>
#include <cstring>

class Heap {
 public:
  Heap();
  ~Heap();
  void add(int data);
  void removeLargest();
  void removeAll();
  void print(int depth, int index);
  int storage[100];
  int lastElement;
};
