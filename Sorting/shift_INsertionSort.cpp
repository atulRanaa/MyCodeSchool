#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
void insertionSort(int arr[],int size){
   int i,j,temp;
   int count=0;
     for(i=1;i<size;i++){ 
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){ 
            arr[j+1]=arr[j];
            j--;count++;
        }
        if(temp!=arr[j+1]) {arr[j+1]=temp; count++;}
      }
printf("%d\n",count);
}
int main()
{  int t,n;
   cin>>t;
      while(t--){
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++) cin>>arr[i];
         insertionSort(arr,n);
         //cout<<endl;
      }
    return 0;
}

