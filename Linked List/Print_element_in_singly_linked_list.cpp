/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{ Node* temp=head;
  
   if(head!=NULL){
   while(temp!=NULL){
      printf("%d\n",temp->data);
      temp=temp->next;
  }
  
  }
}
