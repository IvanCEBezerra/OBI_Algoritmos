#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;
    // remove  km's out of circle
    int laps = d-5;
    cout << laps%8 << endl;
    return 0;
}

