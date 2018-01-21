/*Author: Dhakman Sing Sunuwar
Program: WAP to print sum of all odd number between 500 and 1000.
Lab No.: 9
Date: 11th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	for(i=501;i<1000;i+=2)
	{
		printf("%d \n",i);
	sum=sum+i;	
	}
	printf("sum is %d",sum);
	getch();
	return(0);
}
