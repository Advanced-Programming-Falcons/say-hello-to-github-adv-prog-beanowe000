#include <iostream>

using namespace std;

int main(void){
    cout << "hello";

    int num = 0;
    while (num <100000){
        if( num % 1000 == 0){
        cout << " num = " << num << endl;
    }
    num++;
}

    for (int num = 0; num <100; num++){
        cout << "num = " << num <<endl;
    }

    return 0;
}