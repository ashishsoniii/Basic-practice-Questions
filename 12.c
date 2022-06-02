// Without using any string.h library functions Write a program to compares first n characters of two strings.

#include <stdio.h>
int main()
{
    char Str1[100], Str2[100];
    int result, i;
    int n;
    printf("\n Please Enter the First String :  ");
    gets(Str1); // input of 1st string
    printf("\n Please Enter the Second String :  ");
    gets(Str2); // iinput of 2nd strign
    printf("\nEnter n(till string to be compaired): ");
    scanf("%d", &n); // input for which nth chracter apped to other string
    
    for (i = 0; i < n ; i++)
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

