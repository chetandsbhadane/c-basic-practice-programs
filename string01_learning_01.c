#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char str[10];
	int i,l=0;
	
	printf("enter any string\n");
	scanf("%s",str);  // 0	1	2	3	4	5
					//	H	e	l	l	o	\0
					
	for(i=0;str[i]!='\0';i++){
		l++;
	}
	printf("%d",l);
	
	return 0;
}
