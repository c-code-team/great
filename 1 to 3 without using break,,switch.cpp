/*find no between 1 and 3 using switch without break */
#include<stdio.h>
int main(){
	int i;
	printf("enter the value of value between 1 to 3 \n");
	scanf("%d",&i);
	switch(i)
	{
		case1:
			printf("you entered 1");break;
		case2:
			 printf("you entered 2");break;
		case3:
			printf("you entered 3");break;
		default:
			printf("wrong choice");
		return 0;	
	}
}
