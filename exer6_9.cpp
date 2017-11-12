#include <iostream.h>
void fun()	
{
	int i,num=0,m;
	cin>>m;
    for(i=1;i<m;i++)
    {   
        if(i%7==0||i%11==0) 
        {   
            cout<<"i="<<i<<endl;
            num++; 
        }   
    }
	cout<<"num="<<num<<endl;
}
void main()
{
	fun();
}