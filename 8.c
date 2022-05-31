// Without using any string.h library functions Write a program to appends first n characters of a string at the end of another


#include <stdio.h>
int main()
{
    char str1[50], str2[50], i, j, n;
    printf("\nEnter first string: ");
    scanf("%s", str1); // 1st string
    printf("\nEnter n: ");
    scanf("%d", &n); // input for which nth chracter apped to other string
    printf("\nEnter second string: ");
    scanf("%s", str2); // string 2
    // \0 represents end of string
    for (i = 0; str2[i] != '\0'; ++i)
    {
        // It just counts the number of characters in str2
    }
    for (j = 0; str1[j] != '\0'; ++j, ++i)
    {
        // This loop adds the string str1 at the end of str2
        str2[i] = str1[j];
        if (j == n - 1)  //end loop for nth element 
        {
            break;
        }
    }
    str1[i] = '\0'; // represent end of str1
    printf("\nOutput: %s", str2);
    return 0;
}

