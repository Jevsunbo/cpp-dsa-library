#include "dsa/linked_list.h"
#include <iostream>
#include <cassert>

// test functions:
void test_empty_list(){ 
  dsa::LinkedList list;
  assert(list.size()==0);
  assert(list.has_cycle()==false);
  std::cout << "test_empty_list PASSED" << std::endl;
}

int main(){
  test_empty_list();
}