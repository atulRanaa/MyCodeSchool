/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
   
    Node *ptr=(Node *)malloc(sizeof(Node));
    ptr->data=data;
   if(head==NULL) {
        head=ptr;
        ptr->next=NULL;
        ptr->prev=NULL;
        return head;
   }
   if(head->data >= data){
       ptr->next=head;
       ptr->prev=NULL;
       head->prev=ptr;
       head=ptr;
      
   }
    else{
Node *temp=head;
   while(temp->next!=NULL && temp->next->data <= data) temp=temp->next;
   
   ptr->next=temp->next; 
   ptr->prev=temp;
    if(temp->next!=NULL) temp->next->prev=ptr;
   temp->next=ptr;
   }
   return head;
}

