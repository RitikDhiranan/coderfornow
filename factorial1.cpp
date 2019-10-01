#include <iostream>

using namespace std;

int main()
{
    int i,n,f;
    n=0;
    f=1;
    cout<<"Enter the number for factorial:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        f*=i;
    }
    cout<<"Factorial of number"<<f;
}
