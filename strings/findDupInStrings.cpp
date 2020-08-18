
//#include <iostream>
//using namespace std;


/**
 *
 *
 * Time Taken:
 *      Its linear, n+n=2n == O(n)
 * */



int main() {

    char A[]="finding";
    int H[26], i;

    for(i=0; i<26;i++) {
        H[i] = 0;
    }

    for(i=0; A[i] != '\0'; i++) {
        H[A[i]-97] += 1;
    }

    for(i=0; i<26;i++) {
        if(H[i] > 1){
            printf("%c\t", i+97);
            printf("The number of times: %d\n", H[i]);
        }
    }

    return 0;
}
