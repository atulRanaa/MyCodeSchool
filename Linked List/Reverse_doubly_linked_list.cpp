/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{
   Node* temp=head,*temp1; 
    while(temp!= NULL)
    {    
        temp1=temp->next;
        temp->next=temp->prev;
        temp->prev=temp1;
        head =temp;                            
        temp=temp->prev; 
    }
    
    return head;       
}

