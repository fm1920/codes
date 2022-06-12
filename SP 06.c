
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter the values=");
    scanf("%d%d%d",&a,&b,&c);
    avg=(float)(a+b+c)/3;
    printf("the avg of %d,%d and %d is=%f",a,b,c,avg);
}
