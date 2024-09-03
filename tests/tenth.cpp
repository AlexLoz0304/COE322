#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i < 11; i++) {
        cout << float(i)/10 << "\n";
    }

    for (float i = .1; i < 1.1; i += .1) {
        cout << i << "\n";
    }
}