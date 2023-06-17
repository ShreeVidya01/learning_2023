#include<stdio.h>

int arrsum(int arr[],int n,int* sumeven, int* sumodd);

int main() {
    int arr[20],i,n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sumeven=0,sumodd=0;
    arrsum(arr,n,&sumeven,&sumodd);
    printf("the sum of even elements is: %d",sumeven);
    printf("the sum of odd elements is: %d",sumodd);
    return 0;

}

int arrsum(int arr[],int n,int* sumeven, int* sumodd){
    int j;
    for(j=0;j<n;j++){
        if (arr[j]%2==0){
            *sumeven=*sumeven+arr[j];
        }
        else
        {
            *sumodd=*sumodd+arr[j];
        }
    }
}