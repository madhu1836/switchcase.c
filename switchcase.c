#include<stdio.h>
int main()
{
	int ch;
	printf("Enter your choice:");
	scanf("%d", &ch);
	switch(ch)
	{	
		case 1:
			printf("Pizza,Rs-239");
			break;
		case 2:
			printf("Burger, Rs 129");
			break;
		case 3:
			printf("Pasta, Rs 179");
			break;
		case 4:
			printf("French Fries, Rs 99");
			break;
		case 5:
			printf("Sandwich, Rs 149");
			break;
		default:
			printf("out of choice");
			break;
	}
}
