#include "Diagonal.h"
#include "LowerTri.h"
#include "UpperTri.h"
#include <iostream>
using namespace std;


int main() {
    int d;
    cout<<"Enter Dimensions: ";
    cin>>d;

    UpperTri upperTri(d);
    int x;
    cout<<"Enter All Elements\n";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin>>x;
            upperTri.setRowMajor(i, j, x);
        }
    }

    upperTri.display(true);

    return 0;
}

