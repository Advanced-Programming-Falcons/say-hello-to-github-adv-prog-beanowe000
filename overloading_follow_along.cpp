#include <iostream>

using namespace std;
void addition(int num1, int num2){
    cout << "int version: " << num1 + num2 << endl;
}
void addition(double num1, double num2){
    cout << "double version: " << num1 + num2 << endl;
}
double addition(double num1, double num2, double num3){
    cout << "3 num double version: " << num1 + num2 << endl;
}

int main(void){
    addition(4,5);
    addition(4.5,4.5);
    addition(3,4,5);

    return 0;
}