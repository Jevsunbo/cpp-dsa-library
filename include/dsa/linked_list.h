#pragma once

namespace dsa{

  struct Node{
    int data;
    Node* next;
  };

  class LinkedList{
    Node* head;
    public:
    void insertNode(int data);
    void deleteNode(int data);
    int  accessNode(int index);

    LinkedList();
    ~LinkedList();
  };
} 
