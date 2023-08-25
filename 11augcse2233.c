/*WAP to calculate factorial of a number*/

#include<stdio.h>
int fact();
int main()
{
	
	printf("Enter number :");
	printf("Factorial of the number : %d",fact());
	
	return 0;
}
int fact()
{
	int a,num;
	int fact=1;
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		fact=fact*a;
		
	}
	
		
	return fact;
}
	


