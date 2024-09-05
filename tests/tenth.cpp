#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {
        cout << i/10.0 << "\n";
    }

    for (float i = .1; i <= 1.1; i += .1) {
        cout << i << 1-i << "\n";
        cout << i << "\n";
    }
}
