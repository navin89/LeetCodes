BINARY TREES
--
#### Terminology

Height always starts from 0 from top.  
Level always starts from 1 from top

---

#### Number of Binary Trees using N Nodes

Finding the number of binary trees for a given number of nodes, can be derived from a formula called **Catalan Number**.

The Catalan numbers are a sequence of positive integers that appear in many counting problems in combinatorics. 
They count certain types of lattice paths, permutations, binary trees, and many other combinatorial objects. 
They satisfy a fundamental recurrence relation, and have a closed-form formula in terms of binomial coefficients.  

Formula:
    
    T(n)= ^2n!Cn / (n+1)
this formula gives us the number to how many different ways we can shape our tree.

---
We can also find the total number of tress with maximum height for a given number of nodes by using formula:

    Number of trees with max height = 2 ^ n-1
---

What if the nodes are labeled; for example if 3 nodes are labeled as A, B, C.  
We need to use a factorial to piece together with above formula for a given number of node/s. 

Formula:

    T(n)= ^2n!Cn / (n+1) * n!
the added factorial piece gives us for 1 shape how many ways can be filled in - that is n! ways.. 

---

#### Height vs Nodes in Binary Tree

##### Height to Node

Say if we know the height of a tree, how do we find out the minimum and maximum number of nodes possible??  
Let's generate a formula from some simple observations:  

###### For minimum nodes

When height is 1 - minimum nodes is 2  
When height is 2 - minimum nodes is 3  
When height is 3 - minimum nodes is 4  
So, we can derive as height +1 to get the minimum nodes!

    Minimum node = h+1

###### For maximum nodes
we don't really have a clear pattern, but we can use geometric progression series   
to derive a formula, as we can just add all the terms of a gp series.  

Therefore:
    
    a+ar+ar^2+ar^3+...+ar^k = a(r^k+1 -1) / (r-1)
so if we take the example from below with height 3; using the above formula

    a=1, r=2, k=3
    Maximum node = 1(2^3+1 -1) / (2-1) = 15
we get 15 as shown below. you can try out with other height numbers to test it out :+1:

this can be further simplified:

    n=2^h+1 -1

|Height |Min    |Max    |
|-------|-------|-------|
|   1   |   2   | 3     |
|   2   |   3   | 7     |
|   3   |   4   | 15    |


##### Node to Height

Say if we know the number of nodes for a tree, how do we find out the minimum and maximum height for the tree??
Let's generate a formula from some simple observations:  

###### For maximum height

When node is 3 - maximum nodes is 2  
When height is 7 - maximum nodes is 6  
When height is 15 - maximum nodes is 14  
So, we can derive as node -1 to get the maximum height!

    Max height =n-1

###### For minimum height
we don't really have a clear pattern, but we can use our previous simplified formula  
for finding maximum node to derive this formula, to find minimum height.  
First we need to find a way to move the height to the left hand side of the formula..  

Therefore:
    
    n= 2^h-1
    n+1= 2^h+1
    2^h+1= n+1
    h+1= log(n+1)
so if we take the example from below with node 15; using the above formula

    h= log(15+1) -1
    h= log(16) -1
    h= 4-1 =3
we get 3 as shown below. you can try out with other node numbers to test it out :+1:

|Nodes |Min   |Max    |
|------|------|-------|
|   3  |   1  | 2     |
|   7  |   2  | 6     |
|   15 |   3  | 14    |


---






