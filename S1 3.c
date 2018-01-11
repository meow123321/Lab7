#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        char data;
        struct node* next;
    };

void concatenate( struct node* a, struct node* b){

    while( a->next ){
        a = a->next;
    }

    a->next = b;

}

int main(){

    struct node *head1;
    struct node *head2;
    struct node *aux1;
    struct node *aux2;
    struct node* elem2;
    struct node* elem1;
    int i;
    int n;


    head1 = (struct node*)malloc(sizeof(struct node));
    aux1 = head1;

    head2 = (struct node*)malloc(sizeof(struct node));
    aux2 = head2;

    printf("Dati o valoare lui n: ");
    scanf("%d", &n);


    head1->data = 'O';
    head2->data = 'O';

    for( i = 0; i < n; i++){

        elem1 = (struct node*)malloc(sizeof(struct node));
        elem2 = (struct node*)malloc(sizeof(struct node));

        elem1->data = 'a' + i;
        aux1->next = elem1;
        aux1 = elem1;

        elem2->data = 'a' + i;
        aux2->next = elem2;
        aux2 = elem2;
    }

    aux1->next = NULL;
    aux2->next = NULL;

    aux1 = head1;
    aux2 = head2;


    concatenate(aux1, aux2);

    aux1 = head1;

    printf("Lista va arata asa: ");
    while( aux1->next ){
        printf("%c ", aux1->data);
        aux1 = aux1->next;
    }

    free(head1);
    free(head2);
    free(aux1);
    free(aux2);

    return 0;
}
