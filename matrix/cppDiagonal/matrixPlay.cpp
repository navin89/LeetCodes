#include "Diagonal.h"
#include "LowerTri.h"
#include <iostream>
using namespace std;


int main() {
    int d;
    cout<<"Enter Dimensions: ";
    cin>>d;


    LowerTri lowerTri(d);
    int x;
    cout<<"Enter All Elements\n";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin>>x;
            lowerTri.setRowMajor(i, j, x);
        }
    }

    lowerTri.display(true);

    return 0;
}

