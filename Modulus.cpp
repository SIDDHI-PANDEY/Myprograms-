//Demonstration of modulus in c++.
#include<iostream.h>
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is even number."<<endl;
    }
    else
    {
        cout<<n<<"  is an odd number."<<endl;
    }
    return 0;
}
