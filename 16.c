// Without using any string.h library functions Write a program to finds first occurrence of a given sub string in another string

#include <stdio.h>
//this functio seach for substring 
int search(char src[], char str[])
{
    int i, j, firstOcc;
    i = 0, j = 0;
    while (src[i] != '\0')
    {
        while (src[i] != str[0] && src[i] != '\0')
            i++;
        if (src[i] == '\0')
            return (-1);
        firstOcc = i;
        while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0')
        {
            i++;
            j++;
        }
        if (str[j] == '\0')
            return (firstOcc);
        if (src[i] == '\0')
            return (-1);
        i = firstOcc + 1;
        j = 0;
    }
}
int main()
{
    int location;
    char string[] = "google";
    char target[] = "gle";
    location = search(string, target);
    if (location == -1)
        printf("\nNot found");
    else
        printf("\nFound at location %d", location + 1);
    return (0);
}

