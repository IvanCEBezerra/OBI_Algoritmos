#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int aux = a/(n+2); //coins divison
    cout << 2*aux << endl;
    return 0;
}