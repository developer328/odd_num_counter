#include<stdio.h>


int main(void)
{
	int num1 = 0;
	int modulo = 2;
	printf("enter number \n");
	scanf("%d", &num1);	
	int res = num1 % modulo;
	printf("%d \n", res);

	return 0;
}
