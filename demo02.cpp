#include <iostream>
using namespace std;
int main()
{
    int  j, sum = 0;

    cout<<"The first 10 natural number is :"<<endl;
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        cout<<" "<<j; 
    }
    cout<<endl<<"The Sum is :"<<sum;

    return 0;
}
