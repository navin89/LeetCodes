#include <stdio.h>

/*
 * 3 methods to find duplicates
 *
 * 1. compare with other letters 1 by 1
 * 2. Using Hashtable as counting
 * 3. Using Bits
 *
 * upper case ascii code range: 65-90
 * lower case ascii code range: 97-122
 * */

int main()
{
    // using hashtable method
    char A[] = "finding";
    char H[26];
    int i, j;

    for (i=0;A[i]!='\0'; i++)
    {
        H[A[i]-97]+=1;
    }

    for (j=0;j<26;j++)
    {
        // more than 2
        if(H[j] >1)
        {
            printf("Duplicate letter: %c\n", j+97);
            printf("Number of duplicates: %d\n\n", H[j]);
        }
    }

    return 0;
}

