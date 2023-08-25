
#include<stdio.h>
int main()
{
	int yr;
	printf("leap year");
	yr=1900;
	while(yr<=2023)
	{
	if(((yr%4==0)&&(yr%100!=0))||(yr%400==0))
	printf("year %d is leap",yr); 
	yr++;
    }
	return 0;
}
