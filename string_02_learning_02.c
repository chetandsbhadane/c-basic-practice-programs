#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char str[10];
	int i,l=0;
	int j;
	int flag=1;
	printf("enter any string\n");
	scanf("%s",str);  // 0	1	2	3	4	5
					//	H	e	l	l	o	\0
//	char str2[10];
	
//	str2[10] = str[10];		
		
	for(i=0;str[i]!='\0';i++){
		l++;
	}

	j = i-1;
	for(i=0;i<j;i++,j--){  // m a d a m == m, 
	
		if(str[i] != str[j]){ 

			flag = 0;
			
		}

	}
	if(flag){
		printf("palindrome");
	}
	else{
		printf("not palindorm");
	}
	
	return 0;
}
