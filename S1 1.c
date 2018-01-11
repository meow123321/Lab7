#include <stdlib.h>
#include <stdio.h>

int main(){

    int n;
    int *a;
    int i;

    printf("Numarul de elemente dorit este: ");
    scanf("%d", &n);

     a= (int *)malloc(n*sizeof(int));

    for( i = 0; i < n; i++)
        {
            printf("\nIntroduceti emenetul: ");
            scanf("%d", &a[i]);
        }

    printf("Vectorul arata asa: ");
    for ( i = 0 ; i < n ; i++ )
        printf ( "\n%d" , a[i]);

    free( a );

    return 0;
}
