#include <iostream>
#include "node.cpp"

void print(node *head ){
  while(head!= NULL){
  cout<<head->data<<" ";
  head = head->next;
  }



}

int main() {
  node n1(10);
  node n2(20);
  node n3(30);
  node n4(40);
  node n5(50);
  node *Head = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  n5.next = NULL;

  print(Head);



}
