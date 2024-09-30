#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 5;
    int arr[] {4,5,6,7};
    string arr2[] {"tim","is","great"};
    float arr3[] {1.1,1.2,-0.9};
    
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr)/sizeof(arr[0]);
}