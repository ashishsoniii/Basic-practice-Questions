//Without using any string.h library functions Write a program to converts a string to lowercase.

#include <stdio.h>
int main()
{
    char strupr[30]; // Array initilization
    printf("Enter String:");
    gets(strupr); // input of string
    int i = 0;
    // convert capital letter string to small letter string
    while (strupr[i] != '\0') //  !=null string
    {
        if (strupr[i] > 64 && strupr[i] < 91) // 65 is A &&&& (90 is Z)
            strupr[i] += 32;                  // adding 32 to uppercase gives lowercase
        i++; 
    }
    printf("Lower case String is: %s", strupr);
    return 0;
}
