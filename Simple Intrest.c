#include<stdio.h>
int main()
{
    float P,R,T,I;
    char w;
    printf(" Enter a Principal: ");
    scanf("%f",&P);
    printf(" Enter rate: ");
    scanf("%f",&R);
    printf(" Enter  time: ");
    scanf("%f",&T);
    I=P*R*T/100;
    printf(" Simple Intrest : %f ",I);
    return 0;
}
