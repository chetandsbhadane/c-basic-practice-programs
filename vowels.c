#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char ch;
	printf("Enter Any Character: ");
	scanf("%c",&ch);//A---65
	
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
		printf("\nIt is the small vowel");
	}
	
	else if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
		printf("\nIt is the Capital vowel");
	}
	
	else if((ch>=97)&&(ch<=123)){
		printf("\nIts small charcter");
	}
	
	else if((ch>=65)&&(ch<=90)){
		printf("\nIts Capital character");
	}
	

	return 0;
}
