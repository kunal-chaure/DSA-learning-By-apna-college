#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
         int m = 10;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}