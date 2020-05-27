#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt",ios::trunc);
    ofs<< "Tony"<<endl;
    ofs.close();
}
