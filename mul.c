#include<stdio.h>
int main()
{
	int num, i=1;
	printf("Enter a Number: \n");
	scanf("%d", &num);
	printf("\n Multiplication Table of %d: \n\n", num);
	while(i<=10){
		printf("%d x %d = %d \n", num, i, num*i);
		i++;
	}
	return 0;
}
