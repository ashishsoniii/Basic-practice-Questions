//Without using any string.h library functions Write a program to copies first n characters of one string into another

 #include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[] = {"Go Corona"}; // creates string and initializes value
    char str2[50];               // str2 initialized
    int n;
    printf("\nEnter n(till string gets copied): ");
    scanf("%d", &n); // input for which nth chracter apped to other string
    printf("\n Origninal string: ");
    printf("%s\n", str1); // input for which nth chracter apped to other string
   
    printf("\n Copied string till n: \n ");
    for (int i = 0; i < n; i++)
    {
        str2[i] = str1[i];     // copy string
        printf("%c", str2[i]); // output by character for different approchs
        // outpus character till n as 2nd string contains chracter till n index only
        // after it give garbage to fullfil bit
        //  either we have to empty garbage or we can get output like this
    }
    return 0;
}
