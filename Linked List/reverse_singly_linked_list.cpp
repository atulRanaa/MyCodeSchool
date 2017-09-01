/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{ Node *temp=head,*st;
   if(temp->next==NULL){
       return temp;
   } 
       st=Reverse(temp->next);
       temp->next->next=temp;
       temp->next=NULL;
  return st;
}
