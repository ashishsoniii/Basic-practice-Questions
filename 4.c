//Without using any string.h library functions Write a program to finds length of a string.
#include <stdio.h>
int main()
{
    // string inilization
    char str[] = "this is soni";
    // method 1
    int length = sizeof(str) / sizeof(char) - 1;
    // because of indexing we have to subtract -1
    // we don't  required sizeof(char) in case of
    // char because char takes only 1 byte
    printf("%d \n", length);
    // method 2
    int len;
    for (len = 0; str[len]; len++)
    { // this loop basicall do nothing
      //  loop runs till its condn str[len] is true
      // as str[len] exceds loop ends
    }
    printf("%d", len);
    return 0;
}
