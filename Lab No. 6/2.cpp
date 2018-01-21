/*Author: Dhakman Sing Sunuwar
Program: WAP to check if the character is alphabet or ont alphabet using ternary operation.
Lab no.: 7
Date: 4th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int ASCII;
	printf("enter number or character \n");
	scanf("%c",&ASCII);
	((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))?printf("the character is alphabet"):printf("the character is not alphabet"));
	getch();
}
