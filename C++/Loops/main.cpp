#include <iostream>

using namespace std;

int main()
{
    int n,r,sum=0,m;

    cout<< "Enter a number"<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
        cout<< m<< " is amstrong number\n";
    else
        cout<<m<< " is not amstrong number\n";
    return 0;
}
