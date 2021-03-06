/**
* @author Navin Tamilchelvam
*/

#include "Diagonal.h"
#include <iostream>
using namespace std;


void Diagonal::set(int rw, int col, int elem)
{
    if (rw == col)
        A[rw-1]=elem;
}

int Diagonal::get(int rw, int col)
{
    if (rw == col)
        return A[rw-1];
    else
        return 0;
}

void Diagonal::display()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j)
                cout << A[i]<< " ";
            else
                cout << "0 ";
        }
        cout<<endl;
    }
}



