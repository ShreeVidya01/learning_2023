#include<stdio.h>
#include<string.h>

int rotleft(char *str, int n);
int rotright(char *str ,int n);

int main(){
    char str1[100],str2[100];
    int n2,n1;
    printf("enter the string :");
    scanf("%[^\n]s\n",str1);
    printf("enter the number of rotations:");
    scanf("%d",&n1);

    getchar();

    
    printf("enter the second string :");
    scanf("%[^\n]s\n",str2);
    printf("enter the number of rotations for a second string:");
    scanf("%d",&n2);

    rotleft(str1,n1);
    printf("the left rotated string : %s\n",str1);

    rotright(str2,n2);
    printf("the right rotated string : %s\n",str2);

    return 0;
}

int rotleft(char *str , int n){
    int len = strlen(str);int i;
    n%=len;
    for (i=0;i<n;i++){
        char temp= str[0];
        for(int j=0;j<len-1;j++){
            str[j]=str[j+1];
        }
        str[len-1]=temp;
    }
}

int rotright(char * str, int n){
    int len=strlen(str);
    n%=len;
    for(int i=0;i<n;i++){
        char temp=str[len -1];
        for(int j=len-1;j>0;j--){
            str[j]=str[j-1];
        }
        str[0]=temp;
    }
}