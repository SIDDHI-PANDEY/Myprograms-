//Highest marks.
#include<iostream.h>
int main()
{
    float English,Maths,Science;
    cout<<"Enter your English marks: ";
    cin>>English;
    cout<<"Enter your Maths marks: ";
    cin>>Maths;
    cout<<"Enter your Science marks: ";
    cin>>Science;
    if(English>Maths&&English>Science)
    {
        cout<<"You has scored highest marks in English.\n";
    }
    else if(Maths>Science)
    {
        cout<<"You scored highest marks in Science.\n";
    }
    else
    {
        cout<<"You has scored highest marks in Maths.\n";
    }
    return 0;
}
