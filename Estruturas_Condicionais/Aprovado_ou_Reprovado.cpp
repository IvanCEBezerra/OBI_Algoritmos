#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    cin >> num1 >> num2;

    if ((num1+num2)/2 >= 7.0) {
        cout << "Aprovado" << endl;
    } else if ((num1+num2)/2 >= 4.0) {
        cout << "Recuperacao" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }
    return 0;
}