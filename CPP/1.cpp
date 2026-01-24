#include<iostream>
using namespace std;

int main(){
    int pin = 1234;
    int enterpin = 0;

    while(pin != enterpin){
        cout << "Enter pin: ";
        cin >> enterpin;   // ✅ sahi variable
    }

    cout << "Access granted";
    return 0;
}
