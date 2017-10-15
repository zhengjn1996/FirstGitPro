#include<iostream.h>
void main()
{
   int i,sum=0,a;
   for(i=2000;i<=3000;i++)
   {   	   
	   if((i%4==0&&i%100!=0)||(i%400==0))
		 a=1;
		 else
			 a=0;
		if(a)
        { cout<<"\t"<<i;	
		sum++;}
	 if(sum%10==0)
		 cout<<endl;
   }
	 cout<<endl<<"sum="<<sum;

}
