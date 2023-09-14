#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num; //371

    while (originalNum != 0) {
       // remainder contains the last digit
    	remainder = originalNum % 10;   // 371%10 = 1, 37%10 = 7 
        
    	result += remainder * remainder * remainder;  //1*1*1=1 + 7*7*7 + 
        
       // removing last digit from the orignal number
       originalNum /= 10;  //371/10 = 37
    }

    if (result == num)
        printf("\n%d is an Armstrong number.", num);
    else
        printf("\n%d is not an Armstrong number.", num);

    return 0;
}
