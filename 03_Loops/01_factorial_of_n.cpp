#include <iostream>
using namespace std;
int main(){
    int i;

    int n;
    cout <<"enter the no of which you want to find the factorial:- ";
    cin>>n;
    int sum = 1;

    for (i =1; i <=n;i++){
        sum = sum * i;
    }
    cout <<"The factorial of "<<n<<" is: "<<sum;
 return 0;
}