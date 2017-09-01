/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *A,Node* B)
{
  Node *t1=A,*t2=B;
  while(t1!=NULL && t2!=NULL){
      if(t1->data!=t2->data) return 0;
    t2=t2->next;      
    t1=t1->next;
  }
  if((t1==NULL && t2!=NULL) || (t1!=NULL && t2==NULL))
     return 0;
  else return 1;
}
