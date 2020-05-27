#include <iostream>

using namespace std;

int main()
{
    int A[8]={2,3,1,4,9,6,12,23};
    int max=A[0];

    for(int i=0;i<8;i++)
        if(A[i]>max)
    {
        max=A[i];
    }
    cout<< "Maximum number is : "<<max<<endl;

    return 0;
}
