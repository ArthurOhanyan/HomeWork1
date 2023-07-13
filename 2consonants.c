#include <stdio.h>

int main()
{

	char sym = '0';

	while (1)
	{

	printf("\n\tPlease input the letter: ");
	scanf(" %c", &sym);

	if ((sym > 64 && sym < 91) || (sym > 96 && sym < 123))
	{
	
	switch (sym)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':	
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'Y':
		case 'y':
			printf("\tThe letter is Consonant!!!\n");
			break;
		default:
			printf("\tThe letter is Vowel\n");
			break;	
	
	}
	
	} else 

	{
	
		printf("\tThe input is not a letter,please input the letter\n");
	
	}

	}

}
