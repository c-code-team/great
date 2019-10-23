/*greatest of three no using array */
#include<stdio.h>
int main()
{
	int i,a[3];
	printf("enter three number\n");
	for(i=0;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1] && a[0]>a[2])
	  printf("first number is greatest");
	else if(a[1]>a[0] && a[1]>a[2])
	  printf("second number is greatest");
	else if(a[2]>a[0] && a[2]>a[1])
	  printf("third number is gretest");
}
