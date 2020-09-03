MATRIX
--
#### Terminology


## Lower Triangular Matrix
Suppose we have a 5x5 matrix of M, and we want only yhe lower triangular part filled with values..  

     |  1  |  2  |  3  |  4  |  5  |
     |-----|-----|-----|-----|-----|
     | a11 |  0  |  0  |  0  |  0  |
     | a21 | a22 |  0  |  0  |  0  |
     | a31 | a32 | a33 |  0  |  0  |
     | a41 | a42 | a43 | a44 |  0  |
     | a51 | a52 | a53 | a54 | a55 |

#### Conditions
    
    M[i,j] =0 if i < j
    M[i,j] =non-zero if i >= j
    
    How many non-zero elements?
    5+4+3+2+1 = n+n-1+ ... +3+2+1= n(n+1)/2
    
    How many zero elements?
    n(n-1)/2

Accessing non-zero elements formula   
#### Row-Major Mapping

                                        ARRAY (ROW-MAJOR)
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    | a11 | a21 | a22 | a31 | a32 | a33 | a41 | a42 | a43 | a44 | a51 | a52 | a53 | a54 | a55 |
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    |row 1|   row 2   |      row 3      |      row 4            |        row 5                |

                    Index(A[4][3]) = [1+2+3]+2 =8
                    Index(A[5][4]) = [1+2+3+4]+3 =13
    Therefore, ->   Index(A[i][j]) = [i(i-1) / 2]+j-1
        
#### Column-Major Mapping

                                    ARRAY (COLUMN-MAJOR)
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    | a11 | a21 | a31 | a41 | a51 | a22 | a32 | a42 | a52 | a33 | a43 | a53 | a44 | a54 | a55 |
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    |          col 1              |         col 2         |      col 3      |    col 4  |col 5|

                    Index(A[4][4]) = [5+4+3]+0 =12
                    Index(A[5][4]) = [5+4+3]+1 =13
                    Index(A[5][3]) = [5+4]+2 =11
    Therefore, ->   Index(A[i][j]) = [n+n-1+n-2 ... +n-(j-2)]+(i-j)
                    Simplified ->    [n(j-1) - (j-2)(j-1) / 2] + (i-j)
                    
                    
## Upper Triangular Matrix
Suppose we have a 5x5 matrix of M, and we want only the upper triangular part filled with values..  
    
    |  1  |  2  |  3  |  4  |  5  |
    |-----|-----|-----|-----|-----|
    | a11 | a12 | a13 | a14 | a15 |
    |  0  | a22 | a23 | a33 | a25 |
    |  0  |  0  | a33 | a34 | a35 | 
    |  0  |  0  |  0  | a44 | a45 |
    |  0  |  0  |  0  |  0  | a55 |
    
#### Conditions
    
    M[i,j] =0 | if i > j
    M[i,j] >0 | if i <= j
    
    How many non-zero elements?
    5+4+3+2+1 = n+n-1+ ... +3+2+1 = n(n+1)/2
    
    How many zero elements?
    n(n-1)/2
 
Accessing non-zero elements formula       
#### Row-Major Mapping

                                   ARRAY (ROW-MAJOR)
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    | a11 | a12 | a13 | a14 | a15 | a22 | a23 | a24 | a25 | a33 | a34 | a35 | a44 | a45 | a55 |
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    |           row 1             |          row 2        |      row 3      |    row 4  |row 5|

                    Index(A[4][5]) = [5+4+3]+1 =13
    Therefore, ->   Index(A[i][j]) = [n+n-1+n-2 .. +n-(i-2)] + (j-i)
                    Simplified ->    [n(i-1) - (i-2)(i-1)/2]+ (j-i)
        
#### Column-Major Mapping

                              ARRAY (COLUMN-MAJOR)
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    | a11 | a12 | a22 | a13 | a23 | a33 | a14 | a24 | a34 | a44 | a15 | a25 | a35 | a45 | a55 |
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    |col 1|   row 1   |       col 3     |          col 4        |         col 5               |

                    Index(A[4][5]) = [1+2+3+4]+3 =13
    Therefore, ->   Index(A[i][j]) = [1+2+3+ .. + j-1] + i-1
                    Simplified ->    [j(j-1)/2] + i-1
                    
## Symmetric Matrix
For symmetric matrix, it is sufficient enough to store either lower or upper part of the triangle.  
#### Conditions

    if M[i,j] = M[j,i]
    
## Tri-Diagonal Matrix

    |  1  |  2  |  3  |  4  |  5  |
    |-----|-----|-----|-----|-----|
    | a11 | a12 |  0  |  0  |  0  |
    | a21 | a22 | a23 |  0  |  0  |
    |  0  | a32 | a33 | a34 |  0  |
    |  0  |  0  | a43 | a44 | a45 |
    |  0  |  0  |  0  | a54 | a55 |

#### Conditions
    Main Diagonal i-j =0
    Lower Diagonal i-j =1
    Upper Diagonal i-j =-1
    
    If the above 3 conditions are satisfired, this indicates that they are non-zero elements.
    Therefore we can simplify as: |i-j| <= 1, means it is non-zero element.

    M[i,j] =non-zero if |i-j| <= 1
    M[i,j] =0 if |i-j| > 1
    
    Number of NON-ZERO elements
    3n-2

#### Representations
We can represent using this matrix in an array with either lower, middle and upper or vice versa.  


                                    ARRAY (TRI-DIAGONAL)
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    | a21 | a32 | a43 | a54 | a11 | a33 | a44 | a55 | a12 | a23 | a34 | a45 |
    |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
    |   Lower Diagonal      |       Main Diagonal   |      Upper Diagonal   |
    
    Index(A[i][j])
        case 1 if i-j=1   | index=(i-1)        -> lower diagonal part
        case 2 if i-j=0   | index=(n-1)+(i-1)  -> main diagonal part
        case 3 if i-j=-1  | index=(2n-1)+(i-1) -> upper diagonal part
        
        
## Toeplitz Matrix
Toeplitz is a matrix of M, with all diagonal values in that matrix being the same value.  

    | 1 | 2 | 3 | 4 | 5 |
    |---|---|---|---|---|
    | 2 | 3 | 4 | 5 | 6 |
    | 7 | 2 | 3 | 4 | 5 |
    | 8 | 7 | 2 | 3 | 4 |
    | 9 | 8 | 7 | 2 | 3 |
    | 10| 9 | 8 | 7 | 2 |

#### Conditions
    M[i,j] = M[i-1, j-1]
    
    We don't need to store all values since they are duplicates. Therefore, it is sufficient to store a row of elements  
    and a column of elements from the first row and columns.  
    
    How many elements do we need for a toeplitz matrix ?
    -   element -- n+n-1
    
                    ARRAY
    |---|---|---|---|---|---|---|---|----|
    | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
    |---|---|---|---|---|---|---|---|----|
    |       row         |       col      |
    
    Index(A[i][j])
            case 1 if i<=j    | index= (j-i)         -> Upper Diagonal part
            case 2 if i>j     | index= n+(i-j)-1     -> Lower Diagonal part