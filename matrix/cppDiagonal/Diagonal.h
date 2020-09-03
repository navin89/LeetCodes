/**
* @author Navin Tamilchelvam
*/

#ifndef LEETCODES_DIAGONAL_H
#define LEETCODES_DIAGONAL_H


class Diagonal
{

private:
    int n;
    int *A;

public:

    Diagonal()
    {
        n=2;
        A = new int [2];
    }

    Diagonal(int n)
    {
        this->n = n;
        A = new int [n];
    }

    // setRowMajor the elem at specified rw & col
    void set(int rw, int col, int elem);
    // return the elem
    int get(int rw, int col);
    void display();

    // this destructor is for the constructor
    // but the main focus here is to actually
    // destroy the dynamically create pointer array A
    ~Diagonal()
    {
        delete []A;
    }
};


#endif
