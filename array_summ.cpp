#include <iostream>

using namespace std;
//hjsadhj
int main()
{
    int i,n,sum;
    sum=0;
    int count;
    cout<<"Enter number elements in array"<<endl;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        count++;
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {

        sum+=a[i];
    }
    cout<<"Sum of array elements"<<sum<<endl;
    cout<<count;
}
