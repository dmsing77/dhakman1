/*Author: Dhakman Sing Sunuwar
Programing: WAP to find the greatest number among three number.
Lab No.: 5
Date:
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	else if (b>a && b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
	 getch();
}
