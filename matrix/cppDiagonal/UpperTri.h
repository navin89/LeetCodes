//
// Created by Navin Tamilchelvam on 9/3/20.
//

#ifndef LEETCODES_UPPERTRI_H
#define LEETCODES_UPPERTRI_H
#include <iostream>
using namespace std;

class UpperTri {
private:
    int n;
    int *A;

public:

    UpperTri()
    {
        n=2;
        A = new int [2*(2+1)/2];
    }

    UpperTri(int n)
    {
        this->n = n;
        A = new int [n*(n+1)/2];
    }


    void setRowMajor(int rw, int col, int elem);
    int getRowMajor(int rw, int col);

    void setColMajor(int rw, int col, int elem);
    int getColMajor(int rw, int col);


    void display(bool row);
    int getDimension() {return n;}

    // this destructor is for the constructor
    // but the main focus here is to actually
    // destroy the dynamically create pointer array A
    ~UpperTri()
    {
        delete []A;
    }
};


#endif //LEETCODES_UPPERTRI_H
