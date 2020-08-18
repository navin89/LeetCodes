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

int main() {
    Diagonal d(4);
    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,12);

    d.display();

    return 0;
}

