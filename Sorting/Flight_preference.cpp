#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Flight_details{
 string name;
 int hours;
 int minute;
 int j_time;
 int price;
 //Flight_details(int h,int m,int time,int p):hours(h),minute(m),j_time(time),price(p){}
};
struct compare{
 bool operator()(const Flight_details& struct1,const Flight_details& struct2){
 return  (struct1.price<struct2.price)||
         ((struct1.price==struct2.price)&&(struct1.j_time < struct2.j_time))||
         ((struct1.price==struct2.price)&&(struct1.j_time==struct2.j_time)&&(struct1.hours<struct2.hours))||
         ((struct1.price==struct2.price)&&(struct1.j_time==struct2.j_time)&&(struct1.hours==struct2.hours)&&(struct1.minute<struct2.minute));
 }
};
int main(){
 vector<Flight_details> flights;
 int t,n;
 cin>>t;
      while(t--){
      flights.clear();  
    char ch;
        cin>>n;
        for(int i=0;i<n;i++){
         Flight_details object;
         cin>>object.name;
         cin>>object.hours>>ch>>object.minute;
         cin>>object.j_time;
         cin>>object.price;
flights.push_back(object);  
        }
   sort(flights.begin(),flights.end(),compare());
// int len=flights.size();
  for(int i=0;i<3;i++) cout<<flights[i].name<<" ";
  cout<<endl;
     } 
  return 0;
}
