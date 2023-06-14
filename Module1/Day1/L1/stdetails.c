#include <stdio.h>
#include<math.h>
#include <string.h>

int main()
{
    int rl,phy,che,maths,total;
    float per;
    char name[20];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",name);
    printf("Input  the marks of Physics, Chemistry and Maths: ");
    scanf("%d %d %d",&phy,&che,&maths);
    total = phy+che+maths;
    per = ( total / 300.0 )*100;
    printf("percentage is: %.2f",per);
    return 0;
}

