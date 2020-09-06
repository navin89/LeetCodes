#include <iostream>
using namespace std;
#include <vector>

void swap(int A[], int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

/**
 * Delete for use with Heapify
 * */
int DeleteForHeapify(int A[], int n){
    int x = A[0];  // Max element
    A[0] = A[n-1];

    int i = 0;
    int j = 2 * i + 1;

    while (j < n-1){
        // Compare left and right children
        if (A[j] < A[j+1]){
            j = j+1;
        }

        // Compare parent and largest child
        if (A[i] < A[j]){
            swap(A, i, j);
            i = j;
            j = 2 * i + 1;
        } else {
            break;
        }
    }
    return x;
}


/**
 * Delete to be used for regular heap sort
 * */
int Delete(int A[], int n){
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;j=i*2;

    while(j<n-1)
    {
        if(j<n-1 && A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j])
        {
            swap(A, i, j);
            i=j;
            j=2*j;
        }
        else
            break;
    }

    return val;
}

/**
 * For inserting elements into a heap sort
 * without the use of vector
 * */
void Insert(int A[],int n)
{
    int i=n,temp;
    temp=A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

/**
 * For inserting elements into a heap sort
 * -    For Heapify
 * */
void Insert(vector<int>& vec, int key){
    // Insert key at the end
    auto i = vec.size();
    vec.emplace_back(key);

    // Rearrange elements: O(log n)
    while (i > 0 && key > vec[i % 2 == 0 ? (i/2)-1 : i/2])
    {
        vec[i] = vec[i % 2 == 0 ? (i/2)-1 : i/2];
        i = i % 2 == 0 ? (i/2)-1 : i/2;
    }
    vec[i] = key;
}

/**
 * For inserting elements into a heap sort
 * -    For Heapify
 * */
void InsertInplace(int A[], int n){
    int i = n;
    int temp = A[n];
    while (i > 0 && temp > A[i % 2 == 0 ? (i/2)-1 : i/2])
    {
        A[i] = A[i % 2 == 0 ? (i/2)-1 : i/2];
        i = i % 2 == 0 ? (i/2)-1 : i/2;
    }
    A[i] = temp;
}


void CreateHeap(vector<int>& vec, int A[], int n){
    // O(n log n)
    for (int i=0; i<n; i++){
        Insert(vec, A[i]);
    }
}

void createHeap(int A[], int n){
    for (int i=0; i<n; i++){
        InsertInplace(A, i);
    }
}

void Heapify(int A[], int n){
    // # of leaf elements: (n+1)/2, index of last leaf element's parent = (n/2)-1
    for (int i=(n/2)-1; i>=0; i--){

        int j = 2 * i + 1;  // Left child for current i

        while(j < n-1){
            // Compare left and right children of current i
            if (A[j] < A[j+1]){
                j = j+1;
            }

            // Compare parent and largest child
            if (A[i] < A[j]){
                swap(A, i, j);
                i = j;
                j = 2 * i + 1;
            } else {
                break;
            }
        }
    }
}

template <class T>
void Print(T& vec, int n, char c){
    cout << c << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}

/**
 * MAX HEAP, WITH HEAP SORT & HEAPIFY EXAMPLES
 * */
int main() {
    int H[]={0,14,15,5,20,30,8,40};
    int i;
    for(i=2;i<=7;i++)
        Insert(H,i);

    // print current max-heap
    for(i=1;i<=7;i++)
        printf("%d ",H[i]);
    printf("\n");


    // perform heap sort
    for(i=7;i>1;i--)
    {
        Delete(H,i);
    }
    for(i=1;i<=7;i++)
        printf("%d ",H[i]);
    printf("\n");

    return 0;
}

