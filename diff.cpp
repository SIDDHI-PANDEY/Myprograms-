#include<iostream>
class subtraction()
{
    public:
        int  a,b,d;
        
        public:
            void input()
            {
                cout<<"Enter value of a";
                cin>>a;
                cout<<"Enter value of b"; 
                cin>>b; 
                cout<<"a: "<<a<<"and b: "<<b;
            }
            
            
                
                    void difference()
            {
                d=a-b;
            }
            
                    void display()
                    {
                        cout<<"The difference between"<<a<<"and"<<b<<": "<<diff;
                    }
  };


int main()
{
subtraction sub;
sub.input();
sub.difference();
sub.display();
return 0;
}
                
