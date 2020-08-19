/**
* @author Navin Tamilchelvam
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
// first becomes a global pointer

void Create(int A[], int n)
{
    int i;
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

void Display(struct Node *p)
{
    while (p!=NULL) {
        printf("%d ", p->data);
        p=p->next;
    }
}



int main() {

    int Arr[]= {3,6,88,4,2,28,9,5};
    Create(Arr, 8);
    Display(first);

    return 0;
}

