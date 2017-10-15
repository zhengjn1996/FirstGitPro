#include<iostream.h>
void main()
{
   double r,k,s,c;
   cout<<"输入半径r与整型数k=1或2或3"<<endl;
   cin>>r>>k;
   if(k==1)   
   {s=3.14*r*r;
   cout<<"面积s="<<s<<endl;}
   else 
	   if(k==2)
	   { c=2*3.14*r;
	   cout<<"周长c="<<c<<endl;}
      else 
		  if(k==3)
		  { c=2*3.14*r,s=3.14*r*r;
		  cout<<"面积s="<<s<<"周长c="<<c<<endl;}
}