#include <iostream>
using namespace std;
int main()
{
   int j,n;

   cout<<"Input the number (Table to be calculated) : ";
   cin>>n;
   cout<<endl;
   for(j=1;j<=10;j++)
   {
     cout<<n<<" X "<<j<<n*j;
   }
} 
