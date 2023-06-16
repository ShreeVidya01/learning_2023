#include<stdio.h>

int main(){
int r,i,j,s,k;

printf("Enter the no. of rows : ");
scanf("%d",&r);

for(i=r;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}

for(s=1;s<=2*(r-i);s++)
{
printf(" ");
}

for(k=i;k>=1;k--)
{
printf("%d",k);
}
printf("\n");
}
}
