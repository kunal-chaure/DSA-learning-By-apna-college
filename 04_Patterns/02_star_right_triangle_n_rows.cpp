#include <iostream>
using namespace std;

int main(){

    int n = 10;
    for ( int i =0 ; i<=n ; i++){
        int j;
        for (j =0; j<=i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}