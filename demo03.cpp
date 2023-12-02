#include<iostream>
using namespace std;
int main()
{
   int i,n,sum=0;
   cout<<"Input Value of terms : ";
   cin>>n;

   cout<<"The first "<< n << " natural numbers are: "<<endl;
   for(i=1;i<=n;i++)
   {
     cout<<" "<<i;
     sum+=i;
   }
   cout<<endl<<"The Sum of natural numbers upto "<<n<<" terms : "<<sum;

    return 0;
}
