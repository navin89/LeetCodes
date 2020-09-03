Linked List
--

Why we use linked list?   
I think it's best to poke into the issue of the problems we face with arrays.  
Arrays are normally declared as such:

    int arr[8];
This declaration would be created in stack and the size is known and very much fixed at compile time. If during runtime   
the application needs a bigger array or if it has too many unused slots in the array, we wont be able to resolve those concerns.  
Once the array is declared during compile time, theres nothing we can do about it in runtime.  
#### We are in need of something more dynamic!

YES, a linked list created with pointer to a node.  
Basically, a node will consist of 2 sections - its value and adjacent to it a pointer to the next node or null.

    int *first;


#### NODE

| data  |   next   |
|-------|----------|
The `next` is a pointer

To help with our understanding; we can think of linked list as a setRowMajor of portable chairs where we can sit anywhere and be connected to one another.  
If we use arrays, that would be like a wooden bench with say; 5 seats which is very much a fixed architecture so in our terms its like a fixed data structure.  

Using a pointer to declare, use and manipulate a linked list gives us a more manageable data structure with abstractions.  
When pointers are declared, their underlying value resides in the heap memory and whenever a node in a linked list is added or removed  
the memory is allocated and de-allocated accordingly.
And these nodes will be non-contiguously allocated unlike an array.
---
###### How can we define a node?
For defining a node, we have to define two things: Data and Pointer.  
Data can be any type;

    Float, String, int, long, double, short
Pointer will be pointing to the next node.  
So pointer is of NODE type. Therefore, we are in need of a data structure that can hold the contents of a node.  
We can use a struct type to declare this data structure in C or C++ languages.  
A Structure in C++ is like a class but in classes everything we declare is automatically `private` and  
in structures it is `public` by default.
```c
    struct Node
    {
        int data;
        struct Node *next;  
    };
```

As you could see `next` is pointing to a NODE type structure.  
Let us now see a simple code on how to create a node using C++.  

```c++
    struct Node *p, *q;
    p= new Node;
    // Accessing value & assigning 0 to pointer
    p->data =8;
    p->next =0;
    
    // let q point to p
    q =p;
    // let q point on the next node of p
    q =p->next;
    // move p to next node and this will point
    // wherever p->next is pointing..
    p =p->next;

    // Making a node null
    p=0; or p=NULL;

    // how to check if a pointer p is pointing to some NODE? 
    if (p==NULL) or if (p==0) or if (!p)
    if (p!=NULL) or if (p!=0) or if (p)
    
    // how to check if NODE p is the last node?
    if (p->next==NULL)
    if (p->next!=NULL)

```

---




  
    