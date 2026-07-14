#include "dsa/linked_list.h"
#include <iostream>

int main(){
// lets test to see if the list was properly allocated with the size() function
    dsa::LinkedList list;
    std::cout << "Here is the size of the list: " << list.size() << "." << std::endl;

// now lets test out the other member functions of LinkedList
    list.push_back(10);
    list.push_front(21);
    list.print();

    std::cout << "Now here is the size of the list: " << list.size() << "." << std::endl;

// now to test reverse
    list.push_back(8);
    list.push_back(9);
    list.print();
    std::cout << std::endl;
    list.reverse();
    list.print();

    if(list.has_cycle()){
      std::cout << "It has a cycle!!!" << std::endl;
    }
    else{
      std::cout << "It does NOT have a cycle!" << std::endl;
    }

}