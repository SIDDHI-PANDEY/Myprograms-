#include<iostream>
#include<stdexcept>

using namespace std;

int employees()
{
    int age;
    cout<<"enter  your  age : ";
    cin>>age;
    
    if(age<=15)
    {
        throw "You  are not eligiable for job.\n";
    }
    
    return 0;
    
}

int main()
{
    int x;
    try
    {
        x=employees();
        cout<<"your are ELIGIABLE.\n";
    }
    
    catch(const char  *text)
    {
        cout<<text<<endl;
        return 1;
    }
     
    return 0;
} 
