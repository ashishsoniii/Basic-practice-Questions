// Without using any string.h library functions Write a program to reverses a string.

#include<stdio.h>

// function to find the length of stringg
int length(char* string) {

    int count = 0;

    while (string[count] != '\0') {
        ++count;
    }
    return count;

}

// function to reverse string by swaping elements 
void reverse(char* string) {

    char temp;
    int i, j, n;
    n = length(string);

    // swapping string[i] and string[j] until i<j
    for (i = 0, j = n - 1; i < j; ++i, --j) {
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
    }

}

int main()
{
    char string[100];
    printf("Enter a String: ");
    scanf("%s", string);

    printf("\nString Before Reverse: %s", string);
    reverse(string);
    printf("\n\nString After Reverse: %s", string);
}

