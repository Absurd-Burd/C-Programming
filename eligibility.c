#include<stdio.h>
int main(){
	char gender;
	int age;
	float cgpa;
	
	printf("Enter gender (M/m for Male, F/f for Female): ");
	scanf(" %c", &gender);
	if (gender == 'M'|| gender == 'm'){
		printf("Enter age: ");
		scanf ("%d", &age) ;
		if (age >= 25 && age <= 30) {
			printf ("Enter CGPA: "); scanf ("%f", &cgpa);
			if(cgpa > 6.0){
				printf("Result: Admission Granted! You can take the course. \n");
			} else{
				printf ("Result: Rejected. CGPA must be greater than 6.\n");
				}
		}else if (age < 25){
			printf("Result: Rejected. Age is below 25. n");
		}else {
			printf("Result: Rejected. Age is above 30. \n");
				}
	}else if(gender == 'F' ||  gender == 'f'){
		printf("Result: Rejected. This course is only open to male applicants. \n");
	}else{
		printf("Result: Invalid input. Please enter M/m or F/f.\n");
	}
	printf ("Program exited. Thank you! \n");
	return 0;
}

