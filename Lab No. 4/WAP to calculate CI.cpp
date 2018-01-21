/*Author:
Program:WAP to calculate & print compuound interest.
Lab No.:4
Date:
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float P,A,t,r,n,CI,pow;
	printf("Enter P,r,n and t \n");
	scanf("%f%f%f%f",&P,&r,&t,&n);
	A=P*pow(1+r/n)n*t;
	CI=A-P;
	printf("The compund interest is %f",CI);
	getch();
}
