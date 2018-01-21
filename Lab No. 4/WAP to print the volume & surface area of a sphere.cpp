/*Author:
Program:WAP to print the volume & surface area of a sphere.
Lab No.:
Date:
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float V,r,SA,PI=3.14;
	printf("Enter the radius \n");
	scanf("%f",&r);
	V=4/3*PI*pow(r,3);
	SA=4*PI*pow(r,2);
	printf("The volume is %f \n",V);
	printf("The surface area is %f \n",SA);
	getch();
}

