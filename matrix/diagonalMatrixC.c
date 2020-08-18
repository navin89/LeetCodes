#include <stdio.h>

struct Matrix {

    int A[10];
    //DIMENSION OF MATRIX
    int n;
};

// methods

/**
 * @details
 * only adds value into matrix array
 * if i & j is equal
 *
 * @return void
 * */
void Set(struct Matrix *m, int i, int j, int x)
{
   if (i==j)
       m->A[i-1] = x;
}

/**
 * @details
 * gets value from requested index
 * only returns a value != 0 when
 * i & j is equal; method returns 0 otherwise
 *
 * @return int - the number requested
 * */
int Get(struct Matrix m, int i, int j)
{
    if (i==j)
        return m.A[i-1];
    else
        return 0;
}

/**
 * @details
 * display the matrix as an output
 *
 * @return void
 * */
void Display(struct Matrix m)
{
    for(int j=0; j<m.n; j++) {
        for (int k=0; k<m.n; ++k) {
            if (j==k)
                printf("%d ", m.A[j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}


/**
 * What qualifies a 2D array as a matrix?
 *  -   if array called M;
 *      M[i,j]=0 if and only if, i != j
 * */

int main() {

    struct Matrix m;
    m.n=4;
    Set(&m, 1,1, 20); Set(&m, 2,2, 30); Set(&m, 3,3, 40); Set(&m, 4,4, 50);
    printf("Get result: %d \n", Get(m, 2, 2));
    Display(m);

}