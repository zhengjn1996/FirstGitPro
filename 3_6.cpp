#include<iostream.h>
void main()
{
   double r,k,s,c;
   cout<<"����뾶r��������k=1��2��3"<<endl;
   cin>>r>>k;
   if(k==1)   
   {s=3.14*r*r;
   cout<<"���s="<<s<<endl;}
   else 
	   if(k==2)
	   { c=2*3.14*r;
	   cout<<"�ܳ�c="<<c<<endl;}
      else 
		  if(k==3)
		  { c=2*3.14*r,s=3.14*r*r;
		  cout<<"���s="<<s<<"�ܳ�c="<<c<<endl;}
}