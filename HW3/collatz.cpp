//Alexander Lozano
//AJL4846
//alozano0304
#include <iostream>
using namespace std;

int main() {

    int counter = 0;
    long  int x;
    int j;

    for (int i = 1; i <= 1e3; i++) {

        x = i;
        j = 0;

        while (x != 1){
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
            j ++;
        }

        if (j > counter){
            counter = j;
            cout << i << " is the new longest sequence with " << j << " iterations" << "\n";
        }
      
    }
    return 0;
}
