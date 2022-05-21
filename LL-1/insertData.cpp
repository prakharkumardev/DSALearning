#include <iostream>
#include "node.cpp"

int inser() {
  
  node n1(1);
  node *head = &n1;
  
  node n2(3);
  n1.next = &n2;
  
  cout<<n1.data<<" "<<n2.data<<endl;
  
  cout<< head->data<<" "<<endl;
  
  //dynamically
  
  node *n3 = new node(10);
  node *n4 = new node(20);
  node *headDy = n3;
  n3->next = n4;
  cout<<n3->next->data<<endl;
  
  return 0;
}
