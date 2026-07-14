#include "dsa/linked_list.h"

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