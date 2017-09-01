/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNthElementFromEnd(Node *head,int n)
{
  long int count=0,i; 
    Node *temp=head;
     while(temp->next!=NULL){ temp=temp->next;count++;}
     if(n==0) return temp->data;
     temp=head;
     for(i=0;i<count-n;i++) temp=temp->next;
     
    return temp->data;
}
