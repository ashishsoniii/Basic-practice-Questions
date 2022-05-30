//Write a program that will take file generated in Q2 as input and stores sum of each line in a new file in different lines.  

#include <stdio.h>
#include <math.h>
int main()
{
// creates file pointer
    FILE *fp;
    FILE *fpout;
    int num;                     // store element of array and sum then new element
    int sum = 0;                 // stores sum
    fp = fopen("Data.txt", "r"); // input file
    fpout = fopen("Dataoutput.txt", "w"); // output file
    // for loop for datata input
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // scans nums
            fscanf(fp, "%d", &num);
            sum = sum + num;
            // This if loop is important to help unscan , other wise 1st element of line is repeteadlly scaned
            if (j < 4)
            {
                fscanf(fp, ", ");
            }
        }
        // prints output to file
        fprintf(fpout, "%d \n", sum);
    }
    return 0;
}

