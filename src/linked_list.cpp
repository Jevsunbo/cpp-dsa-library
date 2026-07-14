#include "dsa/linked_list.h"
#include <iostream>

dsa::LinkedList::LinkedList(){
  head = nullptr;
}

dsa::LinkedList::~LinkedList(){
dsa::Node* curr = head;
while(curr!=nullptr){
  dsa::Node* temp = curr->next;
  delete curr;
  curr = temp;
  }
}

void dsa::LinkedList::push_front(int data){
  dsa::Node* n1 = new Node(data);
  n1->next = head;
  head = n1;
} 

void dsa::LinkedList::push_back(int data){
  if(head == nullptr){
    push_front(data);
  }
  else{
    dsa::Node* curr = head;
    while(curr->next != nullptr){
      curr = curr->next;
    }
    curr->next = new Node(data);
  }
}

void dsa::LinkedList::print(){
  dsa::Node* curr = head;
  while(curr != nullptr){
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}

int dsa::LinkedList::size(){
  int count = 0;
  dsa::Node* curr = head;
  while(curr != nullptr){
    count += 1;
    curr = curr->next;
  }
  return count;
}

void dsa::LinkedList::reverse(){
  Node* prev = nullptr;
  Node* curr = head;

  while(curr != nullptr){
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}

bool dsa::LinkedList::has_cycle(){
  Node* slow = head;
  Node* fast = head;

  while(fast != nullptr && fast->next != nullptr){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
      return true;
    }
  }
return false;
}