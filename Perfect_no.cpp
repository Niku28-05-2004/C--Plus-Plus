#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
       if(n%i==0)
       {
        sum=sum+i;
       }
       if(2*n==sum)
       cout<<"Perfect no";
    else
    cout<<"Not a Perfect";
    }
    return 0;
}