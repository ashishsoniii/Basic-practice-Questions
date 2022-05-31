// Without using any string.h library functions Write a program to copies a string into another

#include <stdio.h>
int main()
{
    char str1[]={"Go Corona"}; //creates string and initializes value
    char str2[50];    //str2 initialized
    for(int i =0;i<=sizeof(str1);i++){
        str2[i]=str1[i];        //copy strign
    }
    
    
    printf("\nOutput: %s", str2); //output
    return 0;
}

