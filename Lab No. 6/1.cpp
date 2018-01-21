/*Author: Dhakman Sing Sunuwar
Porgram: WAP to check if a no. is odd or even using ternary operation.
Lab no.: 6
Date: 3rd Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf(" enter any number \n");
	scanf("%d",&a);
	(a%2==0)?printf("the number is even"):("the number is odd");
	getch();
}
