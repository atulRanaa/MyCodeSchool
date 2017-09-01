/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void RemoveDuplicates(Node *head)
{   
      Node *trs=head,*temp;
      while(trs->next!=NULL){
          if(trs->data==trs->next->data){
              temp=trs->next;
              trs->next=trs->next->next;
              free(temp);
          }
          else trs=trs->next;
      }
}
