#include <stdio.h>


int main()
{
    // find if palindrome
    char A[] ="madame";
    int i,j;

    // find length first
    for (j=0; A[j]!='\0'; j++)
    {}
    j=j-1;

    for (i=0; i<j; i++,j--)
    {
        if(A[i]!=A[j]) {
            printf("NOT A PALINDROME");
            break;
        }
    }

    if(i==j)
        printf("PALINDROME");

    return 0;
}