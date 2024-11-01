#include<stdio.h>
//#include<conio.h>
int main()
{
    int a,b,c,d,e,f;
    float sub;
    printf("enter any number a ");
    scanf("%d",&a);
    printf("enter any number b ");
    scanf("%d",&b);
    printf("enter any number c ");
    scanf("%d",&c);
    printf("enter any number d ");
    scanf("%d",&d);
   
   e=a/b;
   f=c/d;
    sub=e-f;
    printf(" The value of a/b  is : %d \n",e);
    printf(" The value of c/d is : %d \n",f);
    printf(" The sum of div of a/b and c/d is : %f \n",sub);
   
return 0;
} 
