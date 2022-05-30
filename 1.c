//Write a program to calculate the sum of 5 integers in an array using pointers.

#include <stdio.h>
int main()
{ 
    // array initialization
    int arr[5] = {9, 5, 2, 4, 1};
    // creating pointer that point array arr
    int *ptr = arr;
    // inilizatization of sum integer which stores sum of 5 elements
    int sum = 0;
    // running loop 5 time so initilizing i and running
    //  while loop and increaminting ptr so that array's index can be increamented
    //  and storing sum in sum int variable
    int i = 1;
    while (i <= 5) // runs loop 5 time
    {
        sum = sum + *ptr;
        ptr++;
        i++;
    }
    printf("sum of array with 5 element is: %d ", sum); // prints out sum of 5 element
    return 0;
}
