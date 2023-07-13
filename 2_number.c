#include<stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (1)
	{

	printf("\n\tInput the first number: ");
	scanf("%d", &num1);
	printf("\tInput the second number: ");
	scanf("%d", &num2);
	printf("\tInput the thrth number: ");
	scanf("%d", &num3);

	if ((num1 == num2 && num2 == num3) || (num1 != num2 && num1 != num3 && num2 != num3)){
		
		printf("\n\tBolory kam havasar en kam tarber\n");

	}else {

		if (num1 > num2 && num1 < num3){
		
			printf("\n\t%d - greater\n", num1);
		
		} else if (num2 > num3){
		
		 	printf("\n\t%d - greater\n", num2);
		
		}else {
		
			printf("\n\t%d - greater\n", num3);
		
		}
	
	}

	
	

	printf("\n\tnum1 - %d\n\tnum2 - %d\n\tnum3 - %d\n", num1, num2, num3);

	}
}


