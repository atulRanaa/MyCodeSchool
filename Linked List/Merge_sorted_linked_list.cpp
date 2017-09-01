/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *A,Node* B)
{
 Node *a,*b,*temp,*head;
     if(A==NULL && B!=NULL) return B;
     else if(A!=NULL && B==NULL) return A;
     else if(A==NULL && B==NULL) return A;
 
 if(A->data <= B->data) {a=A;b=B;}
 else {a=B;b=A;}
 head=a;
    while(a->next!=NULL && b!=NULL){
        if(a->next->data < b->data) a=a->next;
        else{
             temp=b;
             b=b->next;
             temp->next=a->next;
             a->next=temp;
             a=a->next;
            }
    }
    if(a->next==NULL) a->next=b;
 return head;
}
