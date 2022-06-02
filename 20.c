// Write a program to count number of words in a string.

#include <stdio.h>
int main()
{
  char str[50]; // Declaring Array
  gets(str);
  int count = 1, i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    {
      count++; //if occur count++
    }
    i++; // Increment operator
  }
  printf("%d\n", count); // Printing out result
  return 0;
}

