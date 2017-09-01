/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{ Node* temp=head;
  Node *nptr=(Node*)malloc(sizeof(Node));
     nptr->data=data;
     nptr->next=NULL;
    if(head==NULL) head=nptr;
    else{
        while(temp->next!=NULL){
           temp=temp->next;
        }
        temp->next=nptr;
    }
     return head;
}
