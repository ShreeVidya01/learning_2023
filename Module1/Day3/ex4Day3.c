#include<stdio.h>
int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter total number of elements n");
    scanf ("%d", &elem);
    printf ("Enter first number n: \n");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("Enter another number \n");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("n The largest number is %d \n", lar);
    printf ("n The smallest number is %d \n", sm);
    return 0;
}