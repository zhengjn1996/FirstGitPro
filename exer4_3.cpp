#include<iostream.h>
void main()
{int a,b=0,c;
 cout<<"ÇëÊäÈë"<<endl;
 cin>>a;
 do
 {
 if(a%2==0)
 {a=a/2;
 c=1;
 }
 else
	{ a=a*3+1;
 c=1;}
 if(a==1)
 {c=0;}
 b++;
 }while(c);
 cout<<b-1<<endl;
}
