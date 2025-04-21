Hey how r u

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r;
	int fact(int n);
	printf("enter the value of n and r");
	scanf("%d%d",&n,&r);
	if(n<r)
		printf("the value must be greater  than the value of r");
	else
		printf("Binomial coefficient=%d",fact(n)/(fact(r)*fact(n-r)));
	getch();
}
//recursive function
int fact(int n)
{
	if(n==0||n==1)
		return(1);
	else
		return(n*fact(n-1));
}
