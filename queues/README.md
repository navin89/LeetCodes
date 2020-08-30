Queue
--
#### Terminology
    -   In our daily life, the concept of queues are often used.  
        For example, we are put on a queue while we wait for the customer service on the ohonelione, checking out our items at the supermarket  
        cars standing in queue at a toll booth and etc.  
        
        In various algorithms and applications can be found thus its one of the basic data structures. 

####Discipline of Queue

    -   Queue has a discipline of FIFO (First-In First-Out). It is fundamentally different from a Stack data structure.  
        Therefore the insertion and deletion are performed at 2 different ends of an array.   

####Characteristics

    -   Has two ends front and rear end  
    -   Insertion performed from the rear end  
    -   Deletion performed from front end

###QUEUE ADT

####DATA

    1.  Array - Space for storing elements
    2.  Front pointer - for deletion
    3.  Rear pointer - for insertion

####OPERATIONS  

    1.  enqueue(x)  
        -   inserting an element in a the queue from rear end
    2.  dequeue()  
        -   deleting an element from front end
    3.  isEmpty()  
        -   checking if queue is emopty
    4.  isFull()  
        -   chekcing if queue is full
    5.  first()  
        -   what is the first element in the queue?
    6.  last()  
        -   what is the last element in the queue?
    
Queue can be implement using *2 physical data structures* such as an **Array** and **Linked  List**.

We can construct queues with 1 or 2 pointers.  
Queue - Single pointer, Time Complexity 
   
    1.  enqueue = O(1)  
        -   Since insertion is done at the rear end
    2.  dequeue = O(n)
        -   After deletion, the deleted index which is the first index will be vacant.  
            Therefore, we need to shift the rest of the indexes to the front which is O(n).

Queue - Two pointers, Time Complexity   

####Conditions   
-   In using 2 pointers; initial values for front and rear is -1.  
-   Queue is **EMPTY** when *front == rear*.  
-   Queue is **FULL** when *rear == size-1*.


    1.  enqueue = O(1)  
        -   Since insertion is done at the rear end
    2.  dequeue = O(1)
        -   Using 2 pointers, we are shifting down the array after deleting an element.  
            This covers up the vacant index.
            
            
####Circular Queue
    -   The concept of a circular queue starts with having 2 pointers performing deletion and insertion as similar as above.  
        As the elements are deleted the front pointer will move down the array. But it does leave space at the front of the array, which allows for new insertion  
        enter the array using the rear pointer. 
        To determine the correct indexes (circular values) for both front and rear to move to; we use the mathematical mod operator.
        
-   The front pointer will always be left empty
-   Queue is full when front is at first element index which is 0 and rear is at index size-1
-   As we delete the element, the front pointer will be moved+1
-   To determine the next position for front or rear, formula =  **[ ( (front/rear)+1) % size]**
-   To check if queue is FULL, formula = **[ rear+1%size = front ]**

        
        
####Priority Queue


####Queue using two stacks