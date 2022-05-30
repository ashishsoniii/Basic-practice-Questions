//Write a program to generate a file containing 1000 rows of 5 integers in each line. Integers are comma separated.
  
#include <stdio.h>
int main()
{
    // created file Data.txt
    FILE *newfile;
    // open using w because we only want to add and required nothing
    // not used a because more time we compile more rows added i.e no overwrite
    newfile = fopen("Data.txt", "w");
    // for loop for row 1 -->1000 (0-->999)
    for (int i = 0; i < 1000; i++)
    {
        // for loop for column 1-->5(0-->4)
        for (int j = 0; j < 5; j++)
        {
            // printing rendomly element with randon operation
            fprintf(newfile, "%d", (i + 1) * (j + 1));
            if (j < 4) // this if is used to prevent extra semicolon
            {
                fprintf(newfile, ", ");
            }
        }
        if (i < 999) // done so to brevent extra 1001'th empty line bcz of \n
        {
            // gives line break
            fputs("\n", newfile);
        }
    }
    return 0;
}
