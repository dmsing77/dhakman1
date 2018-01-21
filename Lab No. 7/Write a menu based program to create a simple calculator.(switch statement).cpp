/*Author: Dhakman Sing Sunuwar
Program: Write a menu based to create a simple calculator(Switch Statement).
Lab No.:6
Date: 5th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div,n;
	printf("Simple Calculator");
	printf("1 Addition \n");
	printf("2 Subtraction \n");
	printf("3 Multiplication \n");
	printf("4 Division \n");
	printf("Enter your choice \n");
	scanf("%d",&n);
	printf("Enter two number \n");
	scanf("%d%d",&a,&b);
	switch(n)
	{
		case 1: sum=a+b
		printf("sum is %d",sum);
		break;
		case 2: sub=a-b
		printf("difference is %d",sub);
		break;
		case 3: a*b;
		printf("profuct is %d",mul);
		break;
		case 4: a/b
		printf("division is %d",div);
		break;
		defult: printf("Invalid choice");
	
	}
	getch();
	
 } 
