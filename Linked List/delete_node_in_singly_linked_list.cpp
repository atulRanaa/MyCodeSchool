/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int n) // n is position from beginning
{ Node *temp1=head,*temp2;
  if(n==0){
      head=head->next;
      free(temp1);
    }
  else if(n==1){
      temp2=temp1->next;
      temp1->next=temp2->next;
      free(temp2);
    }
  else{
     for(int i=0;i<n-1;i++) temp1=temp1->next;
     
     temp2=temp1->next;
     temp1->next=temp2->next;
     free(temp2);
  }
  return head;
}
