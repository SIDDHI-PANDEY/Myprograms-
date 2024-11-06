//2D-matrix subtraction.
#include<iostream.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }
    
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<"  ";
            
        }
        cout<<"\n";
    }
    cout<<"\n";
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<"\n";
    }
    
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    
    cout<<"c["<<i<<"] ["<<j<<"] :\n";
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
    
        
