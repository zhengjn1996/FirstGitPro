#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,q,p;
	cout<<"输入三条边长\n"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		q=(a+b+c)/2;
        p=q*(q-a)*(q-b)*(q-c);
		s=sqrt(p);
		cout<<"三角形面积s="<<s<<endl;
	}
	else	     
		cout<<"不是三角形"<<endl;
}