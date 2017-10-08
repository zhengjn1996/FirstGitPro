#include<iostream.h>
void main()
{
	int x,y;
	cin>>x;
		if(x<10) y=1;
       
	    if(x>=10&&x<=99) y=2;
	  
		if(x>=100&&x<=999) y=3;
	
		if(x>=1000) y=4;
	
	switch(y)
	{
        case 1:cout<<"这个数小于10\n";break;
        case 2:cout<<"这个数在10-99之间\n";break;
        case 3:cout<<"这个数在100-999之间\n";break;
        case 4:cout<<"这个数大于1000\n";
	}
	
}

