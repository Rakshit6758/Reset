#include<iostream>
using namespace std;
int main()
{
 int x,y,z;
 
 cout<<"Truth Table Of XY+Z:\n";//Truth table Will be created
 cout<<"X"<<"\t"<<"Y"<<"\t"<<"Z"<<"\t"<<"XY+Z";// cout
for(x=0;x<=1;x++)
 {
 for(y=0;y<=1;y++)// for loop
 {
 for(z=0;z<=1;z++)
 {
  if(x*y+z==2)
  cout<<"\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
  else
   cout<<"\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z<<endl;
   }
  }
 } 
  
return(0);
}
