#include<stdio.h>
int main(void)
{
    int age;

    printf("Enter your age in years:");
    scanf("%d",&age);
    age=age*3.156e+7;
    printf("Your age in seconds is %d",age);

    return 0;
}