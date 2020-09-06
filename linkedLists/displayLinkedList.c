/**
* @author Navin Tamilchelvam
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL, *third=NULL;
// first becomes a global pointer

void Create(int A[], int n)
{
    struct Node *t, *last;
    first=(struct Node *) malloc(sizeof(struct Node));
    first->data =A[0];
    first->next =NULL;
    last=first;

    for (int j=1;j<n; j++) {
        t=(struct Node *) malloc(sizeof(struct Node));
        t->data =A[j];
        t->next =NULL;
        last->next = t;
        last=t;
    }
}

void Create2(int A[], int n)
{
    struct Node *t, *last;
    second=(struct Node *) malloc(sizeof(struct Node));
    second->data =A[0];
    second->next =NULL;
    last=second;

    for (int j=1;j<n; j++) {
        t=(struct Node *) malloc(sizeof(struct Node));
        t->data =A[j];
        t->next =NULL;
        last->next = t;
        last=t;
    }
}

/**
 * @details
 * Loop iteration func for displaying
 * Time Taken:
 *      - O(n)
 * Space Taken:
 *      - O(1) no space taken
 * */
void iterativeDisplay(struct Node *p)
{
    while (p!=NULL) {
        printf("%d ", p->data);
        p=p->next;
    }
}

/**
 * @details
 * Recursive func for displaying values
 * - recursion uses stack
 *
 * O(n) - Time
 * n+1 ~ O(n) - Space
 * */
void recursiveDisplay(struct Node *p)
{
    // base condition -for continuation
    // displays one by one in sequential order
    if(p!=NULL) {
        printf("%d ", p->data);
        recursiveDisplay(p->next);
    }
}

/**
 * @details
 * Recursive func for displaying
 * -    recursion uses stack
 *
 * This func is different as it displays the values
 * in reverse order.
 *
 * O(n) - Time
 * n+1 ~ O(n) - Space
 * */
void recursivelyDisplayInReverse(struct Node *p)
{
    // base condition -for continuation
    // displays in reverse order
    if(p!=NULL) {
        recursivelyDisplayInReverse(p->next);
        printf("%d ", p->data);
    }
}

/**
 * @details
 * Counting nodes in a linked list using iteration
 * O(n) - Time
 * O(1) - Space
 * */
int iterativeCount(struct Node *p)
{
    int c=0;
    while (p!=NULL) {
        c++;
        p=p->next;
    }
    return c;
}

/**
 * @details
 * Counting nodes in a linked list using recursion
 * -    recursion uses stack
 * O(n) - Time
 * O(n) - Space
 * */
int recursiveCount(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return recursiveCount(p->next) +1;
}

/**
 * @details
 * Adding nodes in a linked list using iteration
 *
 * O(n) - Time
 * O(1) - Space
 * */
int iterativeAdd(struct Node *p)
{
    int sum =0;
    if(p) {
        sum=sum+p->data;
        p=p->next;
    }
    return(sum);
}

/**
 * @details
 * Adding nodes in a linked list using recursion
 * -    recursion uses stack
 *
 * O(n) - Time
 * O(n) - Space
 * */
int recursiveAdd(struct Node *p)
{
    if(p==0)
        return 0;
    else
        return recursiveAdd(p->next) +p->data;
}

/**
 * @details
 * Find out maximum element in a linked list
 * using iteration
 *
 * int data type in C has 4 bytes
 *
 * O(n) - Time
 * O(1) - Space
 * */
int iterativeFindMax(struct Node *p)
{
    signed int m =-2147483648;

    while (p) {
        if(p->data > m)
            m=p->data;
        p=p->next;
    }

    return(m);
}

/**
 * @details
 * Find out maximum element in a linked list
 * using recursion
 * -    recursion uses stack
 *
 * int data type in c++ has 4 bytes
 *
 * O(n) - Time
 * O(n) - Space
 * */
int recursiveFindMax(struct Node *p)
{
    signed int m =-2147483648;
    int x=0;

    if(p==0)
        return m;

    x=recursiveFindMax(p->next);
    return x>p->data? x : p->data;
}

/**
 * @details
 * Searching element in a linked list
 * using iteration
 *
 * binary search is not suitable because
 * we cant reach the middle in O(1) as linked list needs
 * to be traversed which takes O(n).
 * Therefore, performing linear search is more suitable on a linked list.
 *
 * O(n) - Time
 * O(1) - Space
 * */
struct Node* iterativeSearch(struct Node *p, int key)
{
    while (p!=NULL) {
        if(key==p->data)
            return(p);
        p=p->next;
    }

    return NULL;
}

/**
 * @details
 * Searching element in a linked list
 * using recursion
 * -    recursion uses stack
 *
 * binary search is not suitable because
 * we cant reach the middle in O(1) as linked list needs
 * to be traversed which takes O(n).
 * Therefore, performing linear search is more suitable on a linked list.
 *
 * O(n) - Time
 * O(n) - Space
 * */
struct Node* recursiveSearch(struct Node *p, int key)
{
    if(p==NULL) {
        return NULL;
    }

    if (key==p->data)
        return (p);

    return recursiveSearch(p->next, key);
}

/**
 * @details
 * Improving linear search within a linked list using iteration.
 * We can use 2 methods called: Transposition & Move To Head.
 *
 * Using transposition we are moving values but we want to avoid doing
 * that when we are using a linked list.
 *
 * Using move to head; we can move the entire node instead to the head position,
 * thus giving the chance for the node to be acquired at O(1) on the next search.
 *
 *
 * */
struct Node* iterativeSearchMoveToHead(struct Node *p, int key)
{
    // track prev node
    struct Node *q=NULL;

    while (p!=NULL) {
        if(p->data==key) {
            q->next =p->next;
            p->next =first;
            p=first;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

/**
 * @details
 * Insertion in a linked list.
 * Two use cases:
 *
 *  1. Insert before First Node
 *      -   O(1) - Time
 *
 *  2. Inserting after given Position
 *      -   Best Case: O(1) - Time
 *      -   Worst Case: O(n) - Time
 * */
void Insert(struct Node *p, int pos, int key)
{
    struct Node *t;

    if (pos < 0 || pos > iterativeCount(p))
        return;
    t =(struct Node *) malloc(sizeof(struct Node));
    t->data =key;

    if (pos==0) {
        t->next =first;
        first =t;
    } else {
        for (int i = 0; i < pos-1; i++) {
            p=p->next;
        }
        t->next =p->next;
        p->next =t;
    }
}

/**
 * @details
 * Deletion in a linked list.
 * Two use cases:
 *
 *  1. Delete First Node
 *      -   O(1) - Time
 *
 *  2. Delete a Node at given Position
 *      -   Best Case: O(1) - Time
 *      -   Worst Case: O(n) - Time
 * */
int Delete(struct Node *p, int pos)
{
    struct Node *q;
    int x =-1, i;

    if (pos < 1 || pos > iterativeCount(p))
        return -1;
    if (pos ==1) {
        q =first;
        x =first->data;
        first =first->next;
        free(q);
        return x;
    } else {

        for(i=0;i<pos-1;i++) {
            q =p;
            p =p->next;
        }

        q->next =p->next;
        x =p->data;
        free(p);
        return x;
    }
}

/** REMOVING IN LINKED LIST */

/**
 * @details
 * Remove Duplicates from a sorted Linked List
 *
 * This method only removes duplicate if it exist
 * on the very next index (side by side).
 * example:
 *  -   {9,9,28,43,28}
 *      From the above array only the duplicate for number 9
 *      will be detected and removed. 28 wont be removed.
 * */
void RemoveDuplicate(struct Node *p)
{
    struct Node *q =p->next;

    while (q != NULL)
    {
        if (p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

/**
 * @details
 * Remove Duplicates from unsorted Linked List
 *
 * This method removes all duplicate values.
 * we have a few ways to do this.
 * */



/** REVERSING LINKED LIST */


/**
 * @details
 * Reverse a Linked List
 *
 * This method reverses a linked list
 * */


/** SORTING LINKED LIST */

/**
 * @details
 * Merging linked list
 *
 * Time Complexity: O(m+n)
 * */
struct Node* merge_lists(struct Node *p, struct Node *q)
{
    struct Node *resultPointer, *last;
    if (p->data < q->data) {
        resultPointer= last=p;
        p=p->next;
        last->next=NULL;
    }
    else {
        resultPointer= last=q;
        q=q->next;
        last->next=NULL;
    }

    while (p != NULL && q != NULL)
    {
        // check which is smaller
        if(p->data < q->data) {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    if (p != NULL)
        last->next=p;
    else
        last->next=q;

    return resultPointer;
}



/**
 * @details
 * Finding the middle in a linked list
 *
 * */
struct Node* find_middle_list(struct Node* p)
{
    struct Node *middle, *fast_ptr;

    middle=fast_ptr=p;
    while (fast_ptr->next != NULL)
    {
        fast_ptr =fast_ptr->next=fast_ptr->next;


        if(fast_ptr->next != NULL){
            middle = middle->next;
        }
    }

    return middle;
}

/**
 * @details
 * Sort an unsorted linked list using merge sort concept
 *
 *
 * */
struct Node* sortLinkedList(struct Node *node)
{
    struct Node *f, *s, *sortedList, *middle, *middle_next;

    if(node == NULL || node->next == NULL)
    {
        return node;
    }

    middle = find_middle_list(node);
    middle_next = middle->next;
    middle->next =NULL;

    f = sortLinkedList(node);
    s = sortLinkedList(middle_next);

    sortedList = merge_lists(f, s);

    return sortedList;
}


int main() {

    int A[] ={10, 8, 4, 5, 88, 66, 2, 0, 27};
    Create(A, 9);
    recursiveDisplay(sortLinkedList(first));
    printf("\n\n");

    return 0;
}

