#include <iostream>
using namespace std;

// - dummy node
// - current pointer
// - l1 and l2 pointers
// - while loop condition
// - comparison inside loop
// - attach remaining list after loop
// - return dummy->next

// create a function that merges two linked lists

struct Node{
  int data;
  Node* next;
};

Node* merge_list(Node* list1, Node* list2){
  Node* dummy = new Node();
  Node* current = dummy;

  while(list1 != nullptr && list2 != nullptr){
    if(list1->data < list2->data){
      current->next = list1;
      list1 = list1->next;}
    else{
      current->next = list2;
      list2 = list2->next;}
  current = current->next;
}
  if(list1 == nullptr){
    current->next = list2;}
  if(list2 == nullptr){
    current->next = list1;}
return dummy->next;
};

int main() {
// List 1: 1→3→5
Node* n1 = new Node(); 
Node* n2 = new Node();
Node* n3 = new Node();
n1->data = 1; n1->next = n2;
n2->data = 3; n2->next = n3;
n3->data = 5; n3->next = nullptr;

// List 2: 2→4→6
Node* n4 = new Node();
Node* n5 = new Node();
Node* n6 = new Node();
n4->data = 2; n4->next = n5;
n5->data = 4; n5->next = n6;
n6->data = 6; n6->next = nullptr;

// merge them
Node* merged = merge_list(n1, n4);   

// print result

while(merged != nullptr){
  cout << merged->data << "->";
  merged = merged->next;
}
cout << "nullptr" << endl;
}  
