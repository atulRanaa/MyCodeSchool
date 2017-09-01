#include<bits/stdc++.h>
using namespace std;
long int count=0,flag=0;
void swap(long int *a,long int *b){
    long int temp=*a;
    *a=*b;
    *b=temp;
    }
int partition (long int ar[],long int low,long int high) 
{  long int i,j,x; 
    if(flag==0) swap(&ar[low],&swap[high]);
    x=ar[high];    
    i=(low-1);  
 
    for(j=low;j<=high-1;j++) 
    {  if (ar[j]<=x) 
        {   i++;    
            swap(&ar[i], &ar[j]); count++;
        } 
    } 
    if(ar[i+1]!=ar[high]) {swap(&ar[i+1],&ar[high]); count++;} 
    return (i+1); 
} 
void quickSort(long int ar[],long int low,long int high) 
{   long int q; 
    if (low < high) 
    {   q=partition(ar,low,high); 
        quickSort(ar,low,q-1); 
        quickSort(ar,q+1,high); 
    } 
}
int main(){
    int t;
    long int n;
    cin>>t;
       while(t--){
        count=0;flag=0;
            cin>>n;
            long int ar[n];
            for(int i=0;i<n;i++) cin>>ar[i];
        quickSort(ar,0,n-1);
        cout<<count<<" ";
        count=0;flag=1;
        quickSort(ar,0,n-1);
        cout<<count<<endl;
       }
    return 0;
}
