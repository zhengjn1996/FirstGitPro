#include<iostream.h>
void main()
{
	int x,y;
	cout<<"please input x:"<<endl;
		cin>>x;
		if(x<10)
		cout<<"小于10\n";
	    if(x>=10&&x<=99)
		cout<<"在10-99之间\n";
		if(x>=100&&x<=999)
		cout<<"在100-999之间\n";
		if(x>1000)
	    cout<<"大于1000/n";
}