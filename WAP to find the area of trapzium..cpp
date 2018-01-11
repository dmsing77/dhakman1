/*Author: Dhakman Sing Sunuwar
Program; WAP to find the area of trapzium A=1/2(b1+b2)h
Lab No.: 2
Date:
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,h;
	float area;
	printf("Enter a,b,h \n");
	scanf("%d%d%d",&a,&b,&h);
	area=(a+b)*h;
	printf("The area of trapzium is %d",area);
	getch();
}

