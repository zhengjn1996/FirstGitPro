#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,q,p;
	cout<<"���������߳�\n"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		q=(a+b+c)/2;
        p=q*(q-a)*(q-b)*(q-c);
		s=sqrt(p);
		cout<<"���������s="<<s<<endl;
	}
	else	     
		cout<<"����������"<<endl;
}