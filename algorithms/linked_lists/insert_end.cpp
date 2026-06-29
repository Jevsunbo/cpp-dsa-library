#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void print_list(Node* head){
  Node* current = head;
  while(current != nullptr){
  cout << current->data << "->";
  current = current->next;}
  cout << "nullptr" << endl;
};

void insert_end(Node* head, int value){
  // we want to insert a node at the end of the linked list so first, we must traverse through the entire linked list and then we insert the node we want in place of the nullptr and set the next node to nullptr.
  Node* current = head;
  while(current->next != nullptr){
    current = current->next;
    if(current->next == nullptr){
      Node* newNode = new Node();
      newNode->data = value;
      current->next = newNode;
      newNode->next = nullptr;} 
  }
};

void clean_end_insert(Node* head, int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = nullptr;

  Node* current = head;
  while(current->next != nullptr){
    current = current->next;
  }
  current->next = newNode;
}

int main(){
  Node n0, n1, n2, n3;

  n0.data = 0; n0.next = &n1;
  n1.data = 1; n1.next = &n2;
  n2.data = 2; n2.next = &n3;
  n3.data = 3; n3.next = nullptr;

  Node* head = &n0;

  print_list(head);

  clean_end_insert(head, 4);

  print_list(head);
}