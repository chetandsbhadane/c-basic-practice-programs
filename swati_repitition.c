#include <stdio.h>

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    int ans=0;
    
    //Accepting inputs.
    printf("Enter the string: ");
    gets(str);
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    
    printf("The non repeating characters are: ");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)//Finding uniques charcters and printing them.
        {
            printf(" %c ", i);
            
        }
    }
    printf("%d",freq[i]);
     
    return 0;
}
