#include <iostream>

using namespace std;

int my_array[5];
char my_chars[5];

int main(void){
    for(int i = 0; i<5; i++){
        cout << "index: " << i << "value: " << my_array[i] << endl;
    }
    my_chars[0] = 'H';
    my_chars[1] = 'e';
    my_chars[2] = 'l';
    my_chars[3] = 'l';
    my_chars[4] = 'o';

    cout << my_chars << endl;
    
    return 0;
}