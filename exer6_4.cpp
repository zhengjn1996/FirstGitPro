#include <iostream.h>
void main()
{
	int i,Fib[20];
	Fib[0]=1;
	Fib[1]=1;
	for(i=2;i<20;i++)
	{
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	for(i=0;i<20;i++)
	{
		cout<<"f"<<i+1<<"="<<Fib[i]<<"       ";
		if((i+1)%5==0)
			cout<<endl;
	}
	cout<<endl;
}