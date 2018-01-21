/*Author: Dhakman Sing Sunuwar
Progarm: WAP to convert character in uppercase if it is in lower case & vice-versa.
Lab No.: 6
Date: 4th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any one character \n");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		ch+=32;
		printf("character in lovwercase %c",ch);
	}
	else if(ch>=97&&ch<=122)
	{
		ch-=32;
		printf("character in uppercase %c",ch);
	}
	else
	{
		printf("Invalid keyword");
	}
	getch();
}

