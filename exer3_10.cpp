#include<iostream.h> 
 void main() 
 { 
 	int year,month,day,x; 
 	cout<<"������������"<<endl; 
 	cin>>year>>month>>day; 
 		if((year%400==0)||(year%4==0&&year%100!=0))  
  	{  
  		switch(month)  
  		{  
  		case 1:x=day;break;  
  		case 2:x=day+31;break;  
  		case 3:x=day+31+29;break;  
 		case 4:x=day+31+29+31;break;  		 
 		case 5:x=day+31+29+31+30;break;  
  		case 6:x=day+31+29+31+30+31;break;  
  		case 7:x=day+31+29+31+30+31+30;break;  
  		case 8:x=day+31+29+31+30+31+30+31;break;  
  		case 9:x=day+31+29+31+30+31+30+31+31;break;  
 		case 10:x=day+31+29+31+30+31+30+31+31+30;break;  
  		case 11:x=day+31+29+31+30+31+30+31+31+30+31;break;  
  		case 12:x=day+31+29+31+30+31+30+31+31+30+31+30;break;  
 	}  
  		cout<<"�����Ǹ���ĵ�"<<x<<"��"<<endl;  
 	}  
  	else  
 	{  
  		switch(month)  
  		{  
  		case 1:x=day;break;  
		case 2:x=day+31;break;  
  		case 3:x=day+31+28;break;  
  		case 4:x=day+31+28+31;break;  
  		case 5:x=day+31+28+31+30;break;  
  		case 6:x=day+31+28+31+30+31;break;  
 		case 7:x=day+31+28+31+30+31+30;break;  
  		case 8:x=day+31+28+31+30+31+30+31;break;  
  		case 9:x=day+31+28+31+30+31+30+31+31;break;  
  		case 10:x=day+31+28+31+30+31+30+31+31+30;break;  
  		case 11:x=day+31+28+31+30+31+30+31+31+30+31;break;  
  		case 12:x=day+31+28+31+30+31+30+31+31+30+31+30;break;  
  		}  
 		cout<<"�����Ǹ���ĵ�"<<x<<"�졣"<<endl;  
  	}  
 }  
