// Without using any string.h library functions Write a program to sets all characters of string to a given character

#include <stdio.h>
int main()
{
    char string[100];
    int j;
    printf("Please enter any string character: ");
    gets(string);
    printf("Your String character is: ");
    for (j = 0; string[j] != '\0'; j++)
    {
        printf("%c", string[j]); // prints out string chracter
    }
    printf("\n");
    printf("Vowel is/are: ");           // aeiou
    for (j = 0; string[j] != '\0'; j++) // condition check for vovel
    {
        if (string[j] == 'A' || string[j] == 'a' || string[j] == 'E' || string[j] == 'e' || string[j] == 'i' || string[j] == 'I' || string[j] == 'O' || string[j] == 'o' || string[j] == 'U' || string[j] == 'u')
            printf("%c", string[j]);
    }
    printf("\n");
    printf("Consonant is/are: ");
    for (j = 0; string[j] != '\0'; j++) // condn check for consonanaats
    {
        if (!(string[j] == 'A' || string[j] == 'a' || string[j] == 'E' || string[j] == 'e' || string[j] == 'I' || string[j] == 'j' || string[j] == 'O' || string[j] == 'o' || string[j] == 'U' || string[j] == 'u'))
            printf("%c", string[j]);
    }
    printf("\n");
    return 0;
}

