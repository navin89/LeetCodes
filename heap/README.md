Heap
--
#### Terminology
    -   A Heap is a complete binary tree. It is different from a binary Search Tree,  
        where duplicates are also allowed. Normally Heaps are represented as an array.

#### Conditions

    1. A complete binary tree has no gaps between the elements.
        -   Node at index i;  
        -   Left child at 2*i;  
        -   Right child at 2i+1;  

    2. Every element has an element greater than or equal to all of it's descendants.  
       It is then called as MAX HEAP.

    3. Every element has an element smaller than or equal to all of it's descendants.  
       It is then called as MIN HEAP.

#### Height

    -   As we know, the HEIGHT of a (Complete Binary Tree) is always (log n).  
        Because it doesn't unnecessarily increase in height, as it only forms another level when all leaf nodes  
        are completed for the current level.

#### Caveats

    -   In general, Heaps are not useful for searching purposes

#### Creation

    -   When we perform the creation of a Heap with values already in an array; we call this process as creating a Heap in-place.  

#### Deletion

    -   When we delete an element from a Max or Min Heap, we can only delete either the maximum or minimum value from the entire heap.  
        We also must be aware to maintain the validity of a **Complete Binary Tree** during a deletion process.  
        Therefore, during deletion from a Max or Min Heap we need to replace the last element of the heap (last index from teh array)  
        with the root (Max or Min) element. This procedure would enable us to re-achieve a Complete Binary Tree.

#### HEAP SORT

    -   Sorting is done using heap concept by inserting elements in an array data structure with the heap rule.  
        Then deleting each element 1 by 1, thereafter also adding the deleted element inside the last vacant index.  
        This automagically sorts the array. 
