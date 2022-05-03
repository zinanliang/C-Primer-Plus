#include<stdio.h>
#include<limits.h>
#include<float.h>
#define OTHtest 123
int main (void)
{
    const double RENT=3852.99;
    int anotest=123456789;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.4e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.3f*\n",RENT);
    printf("%#d",anotest);
    printf("%d",OTHtest);
    printf("%f",OTHtest);
    printf("%#f",OTHtest);

    return 0;
}