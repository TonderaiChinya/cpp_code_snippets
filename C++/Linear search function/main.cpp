#include <iostream>

using namespace std;

int LinearSearch(int key, int elements,int A[])
{
    for(int i=0;i<elements; i++)
    {
        if(key==A[i])
        return i;
    }
}

int main()
{
    int A[10]={8,3,12,7,4,11,34,1,9,5};
    int key;



   cout<< "Enter element to be searched"<<endl;
   cin>>key;

   int index=LinearSearch(key,10,A);


        cout<< "Element found on "<<index<<endl;

    return 0;
}
