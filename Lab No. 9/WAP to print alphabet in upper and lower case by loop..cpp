/*Author: Dhakman Sing Sunuwar
Program: WAP to print all alphabet from a to z (both uppercase and lowercase.)
Lab No.: 9
Date: 11th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int c,i;
 printf(" 1 Alhphabet in uppercase");
 printf(" 2 Alphabet in lowercase");
 printf(" Enter your choice");
 scanf("%d",&c);
 switch(c)
 {
 	case 1:
	  for(i=65;i<=90;i++)
 	{
 		printf("%c\n ",i);
	 }
	 break;
	 case 2:
	  for(i=97;i<=122;i++)
	 {
	 	printf("%c \n",i);
	 }
	 break;
	 default:
	  printf("Invalid choice");
}
	 getch();
	 return(0);
 }
	
	
