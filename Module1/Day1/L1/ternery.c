#include<stdio.h>

int main(){
    int c,d,i;
    printf("enter the numbers:");
    scanf("%d %d",&c,&d);
    i=c > d ? c : d;
    printf(" %d",i); // here i will have the greater number
    return 0;
    
}