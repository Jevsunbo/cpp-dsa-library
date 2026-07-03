#include <iostream>
using namespace std;

struct Node{
  int data; 
  Node* next;
};

void print_list(Node* head){
  Node* current = head;
  while(current != nullptr){
  cout << current->data << " -> ";
  current = current->next;
}
  cout << "nullptr" << endl;
}

Node* reverse_list(Node* head){
  Node* current = head;
  Node* prev    = nullptr;
  Node* next    = nullptr;

  while(current != nullptr){
    next    = current->next;
    current->next = prev;
    prev    = current;
    current = next;
  }
return prev;
}

int main(){}