// Without using any string.h library functions Write a program to finds first occurrence of a given sub string in another string

#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100], ch;
    int i, index;
    index = -1;
 
    printf("\n Please Enter any String :  ");
    gets(str);
    
    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

          for(i = 0; str[i] == '\0'; i++);  //counts 
    
    for(i ; i <= strlen(str); i++)
    {
        if(str[i] == ch)  
        {
            index = i;  
        }
    }
    if(index == -1)
    {
        printf("\n Sorry!! We haven't found the the Search Element '%c' ", ch);
    }
    else
    {
        printf("\n The Last Occurrence of the Search Element '%c'' at Position %d ", ch, index + 1);
    }   
    return 0;
}
