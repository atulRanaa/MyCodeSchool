/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasLoop(Node* head)
{
	Node *slow=head,*fast=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        if(fast->next!=NULL) fast=fast->next->next;
        else return 0;
        if(slow==fast) return 1;
    }
    return 0;
}
