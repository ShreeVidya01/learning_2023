#include<stdio.h>
int diff(int arr[],int n,int* sumeven,int* sumodd);

int main(){
    int arr[20],i,n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sumeven=0,sumodd=0;
    diff(arr,n, &sumeven, &sumodd);
    printf("the sum of even idex: %d",sumeven);
    printf("the sum of odd index: %d",sumodd);

    return 0;
}

int diff(int arr[],int n,int* sumeven, int* sumodd){
    int j;
    for(j=0;j<n;j++){
        if (j%2==0){
        *sumeven=arr[j]+ *sumeven;
        }
        else{
        *sumodd=arr[j]+ *sumodd;
    }
    }
}