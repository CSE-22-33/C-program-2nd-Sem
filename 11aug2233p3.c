#include<stdio.h>
int swap();
int main()
{	
	pritnf("Swaped:%d",swap());
	return 0;
	
}
int swap()
{
	int a,b,c;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	
	
	
	return 0;
}
