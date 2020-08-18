#include <iostream>
using namespace std;


int main() {

    char A[]="verbose";
    char B[]="obsere";
    size_t A_Size = strlen(A),
           B_Size = strlen(B);
    int i=0, H[26]={0};

    // check if same length
    if (A_Size != B_Size) {
        printf("NOT ANAGRAM, AIN'T THE SAME SIZE AY!");
    } else {
        // this operation is linear ~ O(n)
        for(i=0;A[i]!='\0';i++) {
            H[A[i]-97]+=1;
        }

        // this operation is linear ~ O(n)
        for(i=0; B[i]!='\0';i++) {
            H[B[i]-97]-=1;
            printf("%c: ", B[i]);
            printf("%d\n", H[B[i]-97]);
            // check if became -1
            if (H[ B[i]-97] < 0) {
                printf("NOT ANAGRAM");
                break;
            }
        }
    }

    // B would reach '\0' when its anagram
    if (B[i]=='\0') {
        printf("ITS ANAGRAM!");
    }

    return 0;
}

