#include <iostream>
using namespace std;

void swap(char l, char i)
{

}


void permSwap(char s[], int l, int h)
{
    int i;
    if(l==h){
        printf("Result: %s", s);
    }else{
        for(i=l; l<=h;i++) {
            swap(s[l], s[i]);
            permSwap(s, l+1, h);
            swap(s[l], s[i]);
        }
    }
}

/**
 * @details
 * Recursive of method is needed to achieve back-tracing
 * which aids with brute force - means finding all possible
 * permutations for a given input
 *
 * this swaps pairs instead of single indexes
 * */
void permPairs(char s[][3], int k) {
    static int A[10]={0};
    static char res[10];
    int i;

    //TODO: build algo for pair permutations mit 2D array

//    if(s[k]=='\0') {
//        res[k]='\0';
//        printf("Result: %s\n", res);
//    }else {
//        for(i=0;s[i]!='\0';i++) {
//            if(A[i]==0){
//                res[k] = s[i];
//                A[i]=1;
//                permPairs(s, k+1);
//                A[i]=0;
//            }
//        }
//    }
}



/**
 * @details
 * Recursive of method is needed to achieve back-tracing
 * which aids with brute force - means finding all possible
 * permutations for a given input
 * */
void perm(char s[], int k) {
    static int A[10]={0};
    static char res[10];
    int i;

    if(s[k]=='\0') {
        res[k]='\0';
        printf("Result: %s\n", res);
    }else {
        for(i=0;s[i]!='\0';i++) {
            if(A[i]==0){
                res[k] = s[i];
                A[i]=1;
                perm(s, k+1);
                A[i]=0;
            }
        }
    }
}


int main() {

    char s[] = "1234";
    int sNumbers[3][3] = { {23,24,25}, {33,34,35}, {55,56,57} };

    int rows = sizeof(sNumbers) / sizeof(sNumbers[0]);
    int cols = sizeof(sNumbers[0]) / sizeof(int);
    printf("Rows: %d - Cols: %d", rows, cols );

//    perm(s, 0);

    return 0;
}

