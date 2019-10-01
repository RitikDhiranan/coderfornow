#include <iostream>

using namespace std;

int main()
{
    int a,b,n,c,i;
    a=0;
    b=1;
    cout<<"Enter number of elemets in fibbonacci"<<endl;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(i=0;i<n;i++)
    {

        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}
