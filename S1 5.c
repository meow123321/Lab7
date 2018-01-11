#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    int S;
    int i;
    struct node *next;
    struct node *a;
    struct node *p;
    int c;

    S=0;
    a=malloc(sizeof(struct node));

    for(i=0; i<25; i++){
        a->data=rand()%101;
        printf("\t%d", a->data);
        S=S+a->data;
        a->next=NULL;
    }
    printf("\nThe sum is %d", S);
    printf("\nThe floating-point average is %.2f", (float)S/25);

    return 0;
}
