#include<stdio.h>

int main(){
	char grade;
	printf("\n Enter a letter grade: ");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A':
			printf("perfect score :) \n");
			break;
		case 'B':
			printf("you did good\n");
			break;

		case 'C':
			printf("you did okay\n");
			break;
		case 'D':
			printf("atleast its not an F \n");
			break;
		case 'F':
			printf("you failed :( \n");
			break;
		default:
			printf("Please enter only valid grades\n");
	}
	return 0;

}
