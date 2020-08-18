#include <iostream>
using namespace std;

void printArrayForDisplay(int arr[], int len)
{
    printf("\t\t [Sorted]\n");
    for(int c=0;c<len;c++)
    {
        printf("\t%d ", arr[c]);
    }
    printf("\n\t---------------------");
}



/**
 * @details
 *      BUBBLE SORT
 *
 * @param array - array of data with number values
 * @param len - length of array
 *
 * @return void
 * */
void bubbleSort(int arr[], int len)
{
//    printf("Length is: %d\n", len);
    // flip and iterate first
    for (int i=len-1; i >= 0 ; i--) {
        // follow index frm above but +1
        for(int j=0; j<=i;j++) {
//            printf("%d: ", j); //DEBUG
            if(arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    //print
    printArrayForDisplay(arr, len);
}



/**
 * @details
 *      SELECTION SORT
 *
 * @param array - array of data with number values
 * @param len - length of array
 *
 * @return void
 * */
void selectionSort(int arr[], int len)
{
    for(int j=0;j<len-1;j++) {
        // first set min to index j; which is definately =0
        int min=j;
        for(int i=j+1;i<len;i++) {
            // keep finding the smallest (w/o the previous found index)
            // before its ready for swapping
            if (arr[i] < arr[i-1]) {
                min = i;
            }
        }

        // swap here
        int temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
    }

    printArrayForDisplay(arr, len);
}


/**
 * @details
 *      INSERTION SORT
 *
 * @param array - array of data with number values
 * @param len - length of array
 *
 * @return void
 * */
void insertionSort(int arr[], int len)
{
    for(int j=1;j<len;j++) {
        int index=arr[j]; int i=j;
        while (i>0 && arr[i-1] > index) {
            arr[i] = arr[i-1];
            i--;
        }
        arr[i] = index;
    }

    printArrayForDisplay(arr, len);
}


int main() {

    int arrTest[6] = {9,7,4,5,6,1};
    int length = sizeof(arrTest)/sizeof(arrTest[0]);
//    bubbleSort(arrTest, length);
//    selectionSort(arrTest, length);
    insertionSort(arrTest, length);

    return 0;
}