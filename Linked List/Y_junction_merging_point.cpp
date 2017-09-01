/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergePoint(Node *HeadA,Node *HeadB)
{
    int len_A = 0,len_B = 0;
    Node *trs1=HeadA,*trs2=HeadB;
    while(trs1) {
        len_A ++;
        trs1 = trs1->next;
    }
    while(trs2) {
        len_B++;
        trs2 = trs2->next;
    }
    trs1=HeadA;
    trs2=HeadB;   
    if(len_A>len_B) {
         int Extra = len_A-len_B;
         while( Extra -- ) {
            trs1= trs1->next;
        }
    }
    else if(len_A<len_B){        
        int Extra = len_B-len_A;
        while( Extra -- ) {
            trs2=trs2->next;
        }        
    }
    while(trs1!=trs2) {
        trs1 = trs1->next;
        trs2 =trs2->next;
    }
return trs1->data;
}
    
