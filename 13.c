// Without using any string.h library functions Write a program to Compares two strings without regard to case.

#include <stdio.h>
int upper(char strlwr[]){
     int i = 0;
    // convert lower letter string to upper letter string
    while (strlwr[i] != '\0') //  !=null string
    {
        if (strlwr[i] >= 97 && strlwr[i] <= 122) // 97 is a &&&& (122 is z)
            strlwr[i] -= 32;                     // adding 32 to uppercase gives lowercase
        i++;
    }
}
int main()
{
    char Str1[100], Str2[100];
    int result, i;
    
    printf("\n Please Enter the First String :  ");
    gets(Str1); // input of 1st string
    printf("\n Please Enter the Second String :  ");
    gets(Str2); // iinput of 2nd strign
    
    upper(Str1);//converts str1 to upr case
    upper(Str2);//converts str2 to upr case
//we can make all chracter lower case too 
//by this all string will become of same nature so case sensitivity not matters
    
    for (i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++)
        ; // counts up element in strign
    if (Str1[i] == Str2[i]) // compaires if string are equal or not till n
    {
        printf("\n str1 is Equal to str2 till n");
    }
    else
    {
        printf("\n str1 is Not Equal to str2 ");
    }
    return 0;
}
