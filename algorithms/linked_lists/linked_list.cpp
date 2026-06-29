#include <iostream>
using namespace std;

// Start by writing just the Node struct and a main() that creates three nodes and links them together manually. No functions yet — just raw nodes and pointers.
// Create node with data=1
// Create node with data=2
// Create node with data=3
// Link 1→2→3→nullptr
// Print them by traversing from head
// How to declare a struct
// How to use pointers
// What next should point to

struct Node{
  int data;
  Node* next;
};

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
  n1.data = 1;
  n2.data = 2;
  n3.data = 3;

  Node* head = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = nullptr;

  printList(head);

}