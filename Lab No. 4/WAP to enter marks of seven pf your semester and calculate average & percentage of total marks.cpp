/*Author:
Progaram:WAP to enter marks of seven subject of your semester and calculate average & precentage of total marks.
Lab No.:4
Date:
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int English,Math,Science,Social,Computer,Nepali,Population,Avg,Per,Total;
	printf("Enter the marks of seven subjects \n");
	scanf("%d%d%d%d%d%d%d",&Math,&English,&Nepali,&Social,&Science,&Computer,&Population);
	Total=Math+English+Nepali+Social+Science+Computer+Population;
	Avg=Total/7;
	Per=(Total/700)*100;
		printf("The Avg is %d \n per is %d",Avg,Per);
	getch();
	
}
