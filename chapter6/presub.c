#include<stdio.h>
int main(void)
{
    int pre_i, sub_i,num=1;
    
    pre_i=num++;
    sub_i=num;
    printf("pre_i= %d, sub_i= %d",pre_i,num);

    return 0;
}