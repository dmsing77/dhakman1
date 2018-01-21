/*Author:Dhakman Sing Sunuwar
Program:WAP to check if a no. is positive or negative.
Lab No.:
Date:
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	if (n>0)
	{
		printf("%d is positive");
	}
	else (n<0)
	{
		 printf("%d is negative");
	}
	getch();
}

