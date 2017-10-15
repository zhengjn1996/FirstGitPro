#include<iostream.h>
void main()
{
   double r,k,s,c;
   cout<<"请输入半径r与整型数k=1或2或3\n"<<endl;
   cin>>r>>k;
   s=3.14*r*r;
   c=2*3.14*r;
   if(k==1) cout<<"圆的面积s="<<s<<endl;
   if(k==2) cout<<"圆的周长c="<<c<<endl;
   if(k==3) cout<<"圆的面积s="<<s<<"圆的周长c="<<c<<endl;
}


