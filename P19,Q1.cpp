#include<stdio.h>
int main()
{
	float fer;
	float cel;
	printf("Enter the temp in fer :=");
	scanf("%f",&fer);
	cel=5.0/9.0*(fer-32.0);
	printf("the temp in celsious is := %f",cel);
}
