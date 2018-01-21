/* Author:
Program: WAP to print arithmetic operations.
Lab No.:
Date:
*/

#include<stdio.h>
#include<conio.h>
int main( )
{
	int a,b,sum,sub,mul,div,mod;
	printf("Enter any number a & b \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("sum is %d",sum);
	printf("sub is %d",sub);
	printf("mul is %d",mul);
	printf("div is %d",div);
	printf("mod is %d",mod);
	getch();
	
}
