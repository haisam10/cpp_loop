#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int i,ctr;
    cout<<"Input number of terms : ";
    cin>>ctr;
    for(i=1;i<=ctr;i++)
    {
     cout<<pow(i,3);     
    }
    return 0;
}