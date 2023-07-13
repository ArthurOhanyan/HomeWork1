#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	
		
	int num1 = 0;
	int num2 = 0;
		
	while (1)
	{

	printf("\n\tPlease input first number: ");
	scanf("%d", &num1);
	printf("\tPlease input second number: ");
	scanf("%d", &num2);
	

	if (num1 == num2)
	{

	printf("\t%d is equel to %d\n", num1, num2);

	}else if (num1 > num2)
	{
	
	printf("\t%d is greater then %d \n", num1, num2);
	
	} else 
	{
	
	printf("\t%d is greater then %d \n", num2, num1);
	
	}
	}


}
