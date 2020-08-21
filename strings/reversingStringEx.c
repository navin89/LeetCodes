#include <stdio.h>

// reversing a string
int main() {

    char A[] = "NOHTYP";
    char B[7], t;
    int i, j;

    for (j=0; A[j]!='\0';j++)
    {}
    j=j-1;

    for (i=0; i<j; i++, j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }


    printf("%s", A);

    return 0;
}
