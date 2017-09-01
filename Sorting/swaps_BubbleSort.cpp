#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int size){
  int count=0,i,j;
  int flag=0;
       for(i=0;i<size;i++){ 
         for(j=0;j<size-1-i;j++){
               if(arr[j]>arr[j+1])
                {swap(&arr[j],&arr[j+1]);flag=1;count++;}
          }
         if(flag==0) break;
       }
cout<<count;
}
int main()
{
    int t,n;
    cin>>t;
        while(t--){
           cin>>n;
           int ar[n];
           for(int i=0;i<n;i++) cin>>ar[i];
           bubbleSort(ar,n);
           cout<<endl;
        }
    return 0;
}

