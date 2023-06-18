#include<stdio.h>
#include<string.h>

int convert(char *str);

int main(){
    char str[100]="4321";
    //printf("enter the string :");
    //scanf("%[^\n]s",str);

    convert(str);

    printf("the converted string is : %s",str);

    return 0;

}

int convert(char *str){
    int i=0,num=0;
    for(i=0;str[i]!='\0';i++){
        num= num * 10 + str[i];
    }
    return num;
}