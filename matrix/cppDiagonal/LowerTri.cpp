#include "LowerTri.h"

/**
* @author Navin Tamilchelvam
*/

#include "Diagonal.h"
#include <iostream>
using namespace std;


void LowerTri::setRowMajor(int rw, int col, int elem)
{
    if (rw >= col)
    {
        int index = ((rw * (rw - 1))/2) + col - 1;
        A[index] = elem;
    }
}

void LowerTri::setColMajor(int rw, int col, int elem)
{
    if (rw >= col)
    {
        int index = (n * (col-1) - (((col-2) * (col-1))/2)) + (rw-col);
        A[index] = elem;
    }
}


int LowerTri::getRowMajor(int rw, int col)
{
    if (rw >= col)
    {
        int index = ((rw * (rw - 1))/2) + col - 1;
        return A[index];
    }
    else
        return 0;
}

int LowerTri::getColMajor(int rw, int col)
{
    if (rw >= col)
    {
        int index = (n * (col-1) - (((col-2) * (col-1))/2)) + (rw-col);
        return A[index];
    }
    else
        return 0;
}

void LowerTri::display(bool row)
{
    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n; j++) {
            if(i >= j)
            {
                if (row)
                    cout << getRowMajor(i, j)<< " ";
                else
                    cout << getColMajor(i, j)<< " ";
            }
            else
            {
                cout << "0 ";
            }

        }
        cout<<endl;
    }
}

