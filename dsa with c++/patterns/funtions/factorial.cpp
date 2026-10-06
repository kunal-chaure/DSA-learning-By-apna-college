#include<iostream>
using namespace std;

int sumN (int n){
    int sum = 1;
    for (int i=1; i<=n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main(){

   cout<< sumN(4);
   return 0;
}