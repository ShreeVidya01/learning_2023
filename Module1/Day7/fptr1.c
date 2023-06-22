#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr1,*fptr2;
    fptr1 = fopen("read.txt","r");
    fptr2 = fopen("write.txt","w+");
    if (NULL == fptr1){
        printf("File does not exist!! \n");
        return 2;
    }
    else {
        size_t maxlen=50;
        char *ptr = (char *)calloc(maxlen,sizeof(char));
        while (getline( &ptr, &maxlen, fptr1) != -1){
            fprintf(fptr2,"%s",ptr);
        }
        free(ptr);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}