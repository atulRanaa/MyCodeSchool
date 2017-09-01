#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int count=0;
void merge(long int ar[],long int l,long int m,long int r) 
{ 
    long int i, j, k; 
    long int size1 = m - l + 1; 
    long int size2 =  r - m; 
    long int left[size1],right[size2]; 
 
    
    for (i = 0; i <size1; i++) 
        left[i]=ar[l + i]; 
    for (j = 0; j <size2; j++) 
        right[j]=ar[m + 1+ j]; 
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i<size1 && j<size2) 
    { 
        if (left[i]<=right[j]) ar[k++]=left[i++]; 
        else {ar[k++]=right[j++]; count+=(size1-i);} 
    } 
 
   
    while (i < size1) 
      {ar[k++] = left[i++];} 
    while (j < size2) 
      {ar[k++] = right[j++];} 
        
} 

void mergeSort(long int ar[],long int p,long int q){ 
  long int mid; 
  if(p<q){ 
       mid=(p+(q-p)/2 ); 
   mergeSort(ar,p,mid); 
   mergeSort(ar,mid+1,q); 

   merge(ar,p,mid,q); 
  }
} 
int main()
{ long int t,n;
  cin>>t;
      while(t--){
        count=0;
        cin>>n;
        long int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        mergeSort(ar,0,n-1);
        cout<<count<<endl;
      }
    return 0;
}

