#include <iostream>
using namespace std;
#include <vector>

void swap(int A[], int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int Delete(int A[], int n){
    int x =A[0];  // Max element
    A[0] =A[n-1]; // Last element
    // Assign deleted element to last element
    // sequential
    A[n-1] = x;

    int i = 0; // ROOT
    int j = 2 * i + 1;  // From ROOT to lchild

    while (j < n-1) {
        // Compare left and right children
        // left    right
        if (A[j] < A[j+1]){
            j = j+1;
        }

        // Compare parent and largest child
        if (A[i] < A[j]){
            swap(A, i, j);
            i = j;
            j = 2 * i + 1; // go to left child of current i
        } else {
            break;
        }
    }

    return x;
}


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

//void Heapify(int A[], int n){
//    // # of leaf elements: (n+1)/2, index of last leaf element's parent = (n/2)-1
//    for (int i=(n/2)-1; i>=0; i--){
//
//        int j = 2 * i + 1;  // Left child for current i
//
//        while(j < n-1){
//            // Compare left and right children of current i
//            if (A[j] < A[j+1]){
//                j = j+1;
//            }
//
//            // Compare parent and largest child
//            if (A[i] < A[j]){
//                swap(A, i, j);
//                i = j;
//                j = 2 * i + 1;
//            } else {
//                break;
//            }
//        }
//    }
//}

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

int main() {

    cout << "Create Heap" << endl;
    int b[] = {10, 20, 30, 25, 5, 40, 35};
    Print(b, sizeof(b)/sizeof(b[0]), 'b');

    vector<int> v;
    CreateHeap(v, b, sizeof(b)/sizeof(b[0]));
    Print(v, v.size(), 'v');

    // Delete to perform heap sort
    cout<<"Deleted: "<< Delete(b, sizeof(b)/sizeof(b[0])) << endl;
    Print(b, sizeof(b)/sizeof(b[0]), 'b');
    cout<<"Deleted: "<< Delete(b, (sizeof(b)/sizeof(b[0])-1)) << endl;
    Print(b, sizeof(b)/sizeof(b[0]), 'b');

    return 0;
}

