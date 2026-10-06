#include<iostream>
using namespace std;

int hello() {
    cout << "Hello, World!" << endl;
    return 8;
}   
int main() {
    hello();
    cout << "This is a simple function example in C++." << endl;

    int result = hello(); // This will cause a compilation error because hello() is declared to return void, not int.
    cout << "The result of hello() is: " << result << endl; // This line will not be executed due to the compilation error.
    return 0;
}