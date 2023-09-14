#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char str[10];
	char str2[10];
	int i,l=0,j,k=0;
	
	printf("enter any string\n");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		l++;
	}
//	printf("%d",l);
  
	j = i-1;
	for(i=j;i>=0;i--){
		printf("%c",str[i]);
	}
	
	return 0;
}
