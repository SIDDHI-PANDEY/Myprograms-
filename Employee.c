#include<stdio.h>
#include<string.h>  //declaration of function.
int main()
{
    char name[5][100]={"Neha","Sneha","Mansi","Roham","Ved"};
    char address[5][140]={"Ahmedabad","Rajkot","Dehli","U.P","Kashmir"};
    int  salary[5]={10000,15000,35000,45000,45000};
    int i;
    printf("Empolyees imformation:  \n");
    for(i=0;i<5;i++)
    {
            printf("name:    %s\n",name[i]);
            printf("Address: %s\n",address[i]);
            printf("Salary:  %d\n",salary[i]);
            printf("-----------------------------------\n");
    }
    return 0;
}
    
