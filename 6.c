// Without using any string.h library functions Write a program to converts a string to uppercase.

#include <stdio.h>
int main()
{
    char strlwr[30]; // Array initilization
    printf("Enter String:");
    gets(strlwr); // input of string
    int i = 0;
    // convert lower letter string to upper letter string
    while (strlwr[i] != '\0') //  !=null string
    {
        if (strlwr[i] >= 97 && strlwr[i] <= 122) // 97 is a &&&& (122 is z)
            strlwr[i] -= 32;                     // adding 32 to uppercase gives lowercase
        i++;
    }
    printf("Uppercase String is: %s", strlwr);
    return 0;
}
