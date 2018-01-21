/*Author: Dhakman Sing Sunuwar
Program: WAP to print all even number between 1 and 100 using for, while and do-while loop.
Lab No.: 9
Date: 11th Jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("1 For Loop");
	printf("2 While Loop");
	printf("3 Do-while Loop");
	printf("Enter your choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
		for(i=2;i<100;i+=2)
		{
			printf("%d \n",i);
		}
	break;
	case 2:
	i=2;
	while(i<100)
	{
		printf("%d \n",i);
		i+=2;
	}
	break;
	case 3: 
	i=2;
	do
	{
		printf("%d \n",i);
		i+=2;
	}while(i<100);
	break;
    defult: printf("Invalid choice");
	}
	getch();
	return(0);
}
