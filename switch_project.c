#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char ch;
	
	printf("Enter any character..");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Its a small Vowel...");
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Its a Capital Vowel...");
		break;
		default: 
			printf("\nInvalid");		
	}
	
	return 0;
}
