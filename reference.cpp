#include <iostream>

using namespace std;

int main(void){
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
enum StatusCode {
    Success = 200,
    NotFound = 404,
    ServerError = 500 
};

int main(void){
    day week_day = Monday;
    StatusCode status;
    switch(week_day){
        case Monday;
        cout <<"it is Monday!";
        break;
    }
    switch(status){
        case NotFound;
        cout << "status: " << status
    }
};

    return 0;
}