// Without using any string.h library functions Write a program to compares two strings character by character.

#include <stdio.h>
int main()
{
    char Str1[100], Str2[100];
    int result, i;
 
    printf("\n Please Enter the First String :  ");
    gets(Str1);   //input of 1st string
    
    printf("\n Please Enter the Second String :  ");
    gets(Str2);     //iinput of 2nd strign
    
    for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);  //counts up element in strign
           
    if(Str1[i] == Str2[i]) //compaires if string are equal or not
    {
        printf("\n str1 is Equal to str2");
    }
    else{
        printf("\n str1 is Not Equal to str2");
        
    }
    
    return 0;
}
