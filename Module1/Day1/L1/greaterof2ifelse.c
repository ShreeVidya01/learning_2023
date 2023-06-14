#include<stdio.h>

int main(){
    int a,b;
    printf("enter the two number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    printf("a is greater: %d",a);
    return 1;
    }
    else {
    printf("b is greater: %d",b);
    return 0;
    }
    return 0;
}