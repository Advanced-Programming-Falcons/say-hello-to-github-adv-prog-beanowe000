#include <iostream>
#include <vector>

using namespace std;

class Jedi {
    public:
        string name;
        int age;

        // Default constructor
        Jedi(){
            name = "unknown";
            age = 0;
            cout << "a Jedi is born" << endl;
        }
        void printInfo(){
            cout << "Master: " << name << " is " << age << endl;
        }
};
int main(void) {

    Jedi student;
    student.name = "Kevin";
    student.age = 899;
    student.printInfo();

    vector<Jedi> jed_eyes(4);

    for (Jedi& jedi :jed_eyes){
        jedi.printInfo();
    }

    return 0;
}