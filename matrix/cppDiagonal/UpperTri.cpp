
#include "UpperTri.h"


void UpperTri::setRowMajor(int rw, int col, int elem)
{
    if (rw <= col)
    {
        int index = (n * (rw-1) - (((rw-2) * (rw-1))/2)) + (col-rw);
        A[index] = elem;
    }
}

void UpperTri::setColMajor(int rw, int col, int elem)
{
    if (rw >= col)
    {
        int index = (col * (col-1)/2) + (rw-1);
        A[index] = elem;
    }
}


int UpperTri::getRowMajor(int rw, int col)
{
    if (rw <= col)
    {
        int index = (n * (rw-1) - (((rw-2) * (rw-1))/2)) + (col-rw);
        return A[index];
    }
    else
        return 0;
}

int UpperTri::getColMajor(int rw, int col)
{
    if (rw >= col)
    {
        int index = (col * (col-1)/2) + (rw-1);
        return A[index];
    }
    else
        return 0;
}

void UpperTri::display(bool row)
{
    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n; j++) {
            if(i <= j)
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