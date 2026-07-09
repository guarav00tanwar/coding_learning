#include<iostream>
using namespace std;
int main()
{
    cout<<"\t*****MULTIPLICATION TABLE*****\n";
    int a=1;
    for(int j=1; j<=10; j++)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<a*i<<"\t";
        }
        cout<<endl;
        a++;
    }
    return 0;
}
