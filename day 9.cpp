#include<iostream>
using namespace std;
int main()
{
   int n,sum,count=0;
   cout<<"enter integer = ";
   cin>>n;
   while(n!=0)
   {
       n=n/10;
       count++;
   }
   cout<<"ans = "<<count;
}
