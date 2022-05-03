#include<stdio.h>
int main(void)
{
    float number;
    scanf("%f",&number);
    printf("fixed-point notation:%f\n",number);
    printf("exponential notation%e\n",number);
    printf("p notation:%a\n",number);

    return 0;
}