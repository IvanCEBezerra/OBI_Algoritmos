#include <iostream>
using namespace std;

int main() {
    int n1, n2, avarege;
    cin >> n1 >> n2;
    avarege = (2*n1 + 3*n2) / 5;

    if (avarege >= 7) {
        cout << "Aprovado" << endl;
    } else if (avarege < 3) {
        cout << "Reprovado" << endl;
    } else {
        cout << "Final" << endl;
    }
    return 0;
}