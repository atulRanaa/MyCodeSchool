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
void selectionSort(int arr[],int size){
  int count=0,i,j,min;
  for(i=0;i<size;i++){ 
      min=i;
      for(j=i+1;j<size;j++){
           if(arr[j]<arr[min]) min=j;
      }
    if(min!=i){swap(&arr[i],&arr[min]);count++;}
  }
  cout<<count;
}
int main()
{  int t,n;
   cin>>t;
      while(t--){
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++) cin>>arr[i];
         selectionSort(arr,n);
         cout<<endl;
      }
    return 0;
}

