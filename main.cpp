#include <iostream>
#include <cstring>

void singlelowercase(char sentence[]);

int main() {
  char command[10];
  Heap heap;
  while(true) {
    cout << "Type in add, delete, delete all, or print." << endl;
    cin.get(command, 10);
    cin.ignore();
    lowercase(command);
    if(strcmp(command, "quit") == 0) {
      break;
    }
    else if(strcmp(command, "add") == 0) {
      int data;
      cout << "Enter the number to be added to the heap.";
      cin >> data;
      heap.add(data);
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
