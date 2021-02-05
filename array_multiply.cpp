#include <iostream>

using namespace std;
//shjdgsaj

int main()
{
    int i,n,mul;
    mul=1;
    cout<<"Enter number elements in array"<<endl;
    cin>>n>>endl;
    int a[n];
    for (i=0;i<n;i++)
    {

        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {

        mul*=a[i];
    }
    cout<<"Multiply of array elements\n"<<mul;
}
