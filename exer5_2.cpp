#include<iostream.h>
void main()
{
	float s=0,sum=0,i,n;
	cout<<"ÇëÊäÈënµÄÖµ"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s+=1/(s+i);
	}
	cout<<s<<endl;
}