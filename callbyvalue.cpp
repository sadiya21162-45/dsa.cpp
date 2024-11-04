#include<iostream>
using namespace std;
 
 int swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
 }
 int main(){
     int a;
     cin>>a;
     int b;
     cin>>b;
     cout<<"the value of a is  "<<a<<"and the value of b is "<<b<<endl;
     swap(a,b);
  cout<<"the value of a is  "<<a<<"and the value of b is "<<b<<endl;
return 0;

 }