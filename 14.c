// Without using any string.h library functions Write a program to finds first occurrence of a given character in a string.


#include <stdio.h>
// #include <string.h>
 
int main()
{
    char str[100], check;  //variable decleration
    int i, count;
    count = 0;
 
    printf("\n Please Enter any String :  ");
    gets(str);                       //intake string
    
    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &check);               //chk char
    
    for(i = 0; str!='\0'; i++)
    {
        if(str[i] == check)  //checks
        {
            count++; //breaks
            break;      
        }
    }
    if(count == 0)
    {
        printf("\n Sorry!! We haven't found the Search Character '%c' ", check);
    }
    else
    {
        printf("\n The First Occurrence of the Search Element '%c' is at Position %d ", check, i + 1);
    }   
    return 0;
}

