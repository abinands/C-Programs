//cos(x)=1-x^2/2! + x^4/4! -x^6/6! +.....x^n/n!
//1-power(x,n)/fact(n)

#include<iostream>
using namespace std;


int x,n;
int main()
{
    int temp,a=0,b=1;
    cin>>x>>n;
    temp=n;
     x=x*3.14/180;
    
    
    for(n=2;n<=temp;n=n+2)
    {
        if(n%4==0)
        a=a+power(x,n)/fact(n);
        cout<<a;
        else 
        b=b-power(x,n)/fact(n);
    }
    cout<<a+b;
    return 0;
}

int power(x,n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=x;
    }
cout<<p;    
} 

int fact(n)
{
    cin>>n;
    int f=1;
    for(int i=n;i!=0;i--)
    {
        f=f*i;
    }
    cout<<f;
}

