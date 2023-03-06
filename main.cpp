#include <iostream>
#include <cstring>
#include "heap.h"

void singlelowercase(char sentence[]);

using namespace std;

int main() {
  //takes in a command
  char command[15];
  Heap heap;
  //run the trogram
  while(true) {
    cout << "Type in add, delete, delete all, or print." << endl;
    cin.get(command, 15);
    
    cin.ignore();
    singlelowercase(command);
    //if quit, get out of the loop
    if(strcmp(command, "quit") == 0) {
      break;
    }
    //iff add, get the number to add, and call the heap add function
    else if(strcmp(command, "add") == 0) {
      int data;
      cout << "Enter the number to be added to the heap." << endl;
      cin >> data;
      cin.ignore();
      heap.add(data);
    }
    //if print, call the heap print function with a starting depth of 0 and a starting index of 0
    else if(strcmp(command, "print") == 0) {
      heap.print(0,0);
    }
    //delete the largest value if the command is delete
    else if(strcmp(command, "delete") == 0) {
      heap.removeLargest();
    }
    //delete everything if the user says so
    else if(strcmp(command, "delete all") == 0) {
      heap.removeAll();
    }
  }
  
  return 0;
}




//makes all letters lowercase
void singlelowercase(char sentence[]) {
  //iterating variable
   int i = 0;
   //go through the char array
   while(true) {
     int charVal = (int) sentence[i];
     //if the letter is capital, make it lowercase using ASCII
     if(65<=charVal && charVal <= 90) {
       sentence[i] = (char)(charVal+32);
     }
     //if the character is the null character, 
     else if(sentence[i] == '\0') {
       break;
     }
     //increment the variable
     i++;
   }
}
