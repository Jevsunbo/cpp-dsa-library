#pragma once

namespace dsa{

  struct Node{
    int data;
    Node* next;

    Node(int data){
      this->data=data;
      next = nullptr;
    }
  };  

  class LinkedList{
    Node* head;
    public:
    void push_front(int data);
    void push_back(int data);
    void reverse();
    bool has_cycle();
    void print();
    int size();

    LinkedList();
    ~LinkedList();
  };
} 
