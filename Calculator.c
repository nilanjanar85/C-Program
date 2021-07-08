#include<stdio.h>
int main()
{
	float a,b;
	char g;
	printf(" enter your choice ");
	scanf("%c",&g);
	printf(" enter two numbers ");
	scanf("%f%f",&a,&b);
	switch(g)
	{
		case '+':
			printf("the summation is %f",a+b);
			break;
		case '-':
			printf("the substraction is %f",a-b);
			break;
	    case '*':
	    	printf("the multiplication is %f",a*b);
			break;
		case '/':
			printf("the division is %f",a/b);
			break;
			default :
				printf("error");
	}
	return 0;	
}
