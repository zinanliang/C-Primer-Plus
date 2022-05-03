#include<stdio.h>
#include<string.h>
#include<stdint.h>
#define PAGE 123
int main(void)
{
    double num=1.234567;

    printf("*%d*\n",PAGE);
    printf("*%2d*\n",PAGE);
    printf("*%10d*\n",PAGE);
    printf("*%-10d*\n",PAGE);

    return 0;
}