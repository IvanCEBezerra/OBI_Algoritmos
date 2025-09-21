#include <iostream>
using namespace std;

int main() {
    int p, q;
    char output;
    cin >> p >> q;
    if (p == 1){
        if (q == 1){
            output = 'A';
        }
        else{
            output = 'B';
        }
    }
    else{
        output = 'C';
    }
    cout << output << endl;
    return 0;
}