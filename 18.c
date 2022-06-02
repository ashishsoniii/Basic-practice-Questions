// Without using any string.h library functions Write a program to sets first n characters of a string to a given character.

#include <stdio.h>
int main()
{
    char str[20];
    char ch;
    int n;
    printf("Enter String:");
    gets(str);
    printf("Enter Character:");
    scanf("%c", &ch);
    printf("Enter value of n:");
    scanf("%d", &n);
    int i = 0;
    while (i < n)
    {
        if (str[i] != '\0')
        {
            str[i] = ch;    //copying chr
            i++;
        }
    }
    printf("New String is %s", str);
}

