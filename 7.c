// Without using any string.h library functions Write a program to appends one string at the end of another

#include <stdio.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("\nEnter first string: ");
    scanf("%s", str1);
    printf("\nEnter second string: ");
    scanf("%s", str2);
    // \0 represents end of string
    for (i = 0; str1[i] != '\0'; ++i)
    {
        // It just counts the number of characters in str1
    }
    for (j = 0; str2[j] != '\0'; ++j, ++i)
    {
        // This loop adds the string str2 at the end of str1
        str1[i] = str2[j];
    }
    str1[i] = '\0'; // represent end of str1
    printf("\nOutput: %s", str1);
    return 0;
}
