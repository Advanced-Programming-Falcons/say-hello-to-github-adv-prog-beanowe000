#include <iostream>

using namespace std;

namespace Name_Space {

    int num = 5;
    const double PI = 3.14159;

}
int num = 4;

void function1(bool t){
    cout << Name_Space::num << endl;
    num = 10;
    for(int i = 0; i< 10; i++){
        cout << i << " ";
        int x = 1;
    }
    if(true){
        int x = 5;
    }
    //cout << x << endl;
    //cout << i << endl;
}
int main(void){
    function1(true);
    cout << num << endl;
    return 0;
}