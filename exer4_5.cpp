#include<iostream.h>
void main()
{ 
	int i,j,k;
	k=10;
	for (i=1;i<=99;i++)
	{
		if (i==k)
			k*=10;
		j=i*i;
		if(j%k==i)
		cout<<"i="<<i<<",j="<<j<<endl;
	}
}