#include<stdio.h>
#include<string.h>
int togstring(char *str);

int main(){
    char str[100];
    printf("enter the string");
    scanf("%[^\n]s",str);

    togstring(str);

    printf("the string after toggling : %s \n",str);
    return 0;
}

int togstring(char *str){
    int i=0;
    while (str[i])
    {
        if (str[i]>='A' && str[i] <='Z')
        {
            str[i]+=32;
        }
        else if( str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        i++;
    }
}