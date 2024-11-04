#include<stdio.h>
int square(int );
int main()
{
    float a,sq,b;
    printf("Enter any number: ");
    scanf("%f",&a);
    sq=square(a);
    printf("Area : %.2f",sq);
    return 0;
}

int square(int a)
{
    return a*a;
}
    
