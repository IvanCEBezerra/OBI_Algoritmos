#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    if(x > 0){
        if(y > 0){
            cout << "Q1" << endl;
        }
        else{
            cout << "Q4" << endl;
        }
    }
    else if(x < 0){
        if(y > 0){
            cout << "Q2" << endl;
        }
        else{
            cout << "Q3" << endl;
        }
    }
    else{
        cout << "eixos" << endl;
    }

    return 0;
}