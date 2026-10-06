#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no till you want to print even no:- ";
    cin>>n;
for(int i=1;i<=n;i++)
{
    if (i%2!=0){  // i%2!=0 means odd no and i%2==0 means even no
        cout<<i<<" ";
    }
}
cout<<endl;
return 0;
}