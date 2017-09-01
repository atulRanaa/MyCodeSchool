/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
 Node *cur=head,*prev=NULL,*next=NULL;
  while(cur!=NULL){
      next=cur->next;
      cur->next=prev;
      prev=cur;
      cur=next;
  }
  head=prev;
  Node *temp=head;
  while(temp!=NULL){
      printf("%d\n",temp->data);
      temp=temp->next;
  }
}
