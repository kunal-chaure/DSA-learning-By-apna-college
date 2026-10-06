#include<iostream>
using namespace std;

int sumofdigit (int num){
    int digitsum=0;
    while (num>0)
    {
        /* code */
        int lastdigit =num % 10;
        num /= 10;

        digitsum += lastdigit;
    }
    
    return digitsum;
}
int main()
{
    cout<<"sum of gigit is "<<sumofdigit(2356);
    return 0;
}