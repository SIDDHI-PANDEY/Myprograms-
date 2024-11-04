#include<iostream>
int main()
{
    float P,I,R,T;
   std:: cout<<" Enter prinipal: ";
    std::cin>>P;
    std::cout<<"Enter rate: ";
    std::cin>>R;
    std::cout<<"Enter Time: ";
    std::cin>>T;
    I=P*R*T/100;
   std::cout<<"\n Simple Intrest : "<<I;
    return 0;
}
