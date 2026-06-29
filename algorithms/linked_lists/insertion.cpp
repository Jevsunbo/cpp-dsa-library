#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

// Insert Front Function
Node* insert_front(Node*& head, int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  return newNode;
}

void printList(Node* head){
  Node* current = head;
  while (current != nullptr){
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "nullptr" << endl;
}

int main(){

  Node n1, n2, n3;
  n1.data = 1;   n1.next = &n2;
  n2.data = 2;   n2.next = &n3;
  n3.data = 3;   n3.next = nullptr;

  Node* head = &n1;

  printList(head);

  head = insert_front(head, 0);

  printList(head);

  // Create a new node
  // Point new node's next to current head
  // Move head to point to new node
  // Done
}