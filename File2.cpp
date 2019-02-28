i#include <iostream>
#include <math.h>
using namespace std;

void smallest(int per_rec,int per_cir,int per_sqr,int per_tra)// program for binary`
{

      if(per_rec<per_cir,per_rec<per_sqr,per_rec<per_tra)
      {
         cout<<"perimeter of rectangle is smallest"<<endl;
      }
      else if(per_cir<per_rec,per_cir<per_sqr,per_cir<per_tra)
      {
        cout<<"perimeter of circle is smallest"<<endl;
      }
      else if(per_sqr<per_cir,per_sqr<per_rec,per_sqr<per_tra)
      {
         cout<<"perimeter of square is smallest"<<endl;
      }
      else
      {
         cout<<"perimeter of traingle is smallest"<<endl;
      }
};

void largest(int per_rec,int per_cir,int per_sqr,int per_tra)
{
      if(per_rec>per_cir,per_rec>per_sqr,per_rec>per_tra)
      {
         cout<<"perimeter of rectangle is largest"<<endl;
      }
      else if(per_cir>per_rec,per_cir>per_sqr,per_cir>per_tra)
      {
        cout<<"perimeter of circle is largest"<<endl;
      }
      else if(per_sqr>per_cir,per_sqr>per_rec,per_sqr>per_tra)
      {
         cout<<"perimeter of square is largest"<<endl;
      }
      else
      {
         cout<<"perimeter of traingle is largest"<<endl;
      }
};
     
     

int main()
{

int area=314;

int l=2,b=area/l;    //rectangle

int r=sqrt(area/3.14);        //circle

float a=sqrt(314);          //square

int h=4,base=(2*area)/h,hypo=sqrt(h*h+base*base);        //traingle

int per_rec=2*(l+b);

int per_cir=2*3.14*r;

int per_sqr=4*a;

int per_tra=h+base+hypo;

smallest(per_rec,per_cir,per_sqr,per_tra);

largest(per_rec,per_cir,per_sqr,per_tra);

return 0;
}


