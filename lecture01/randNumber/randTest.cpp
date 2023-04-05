#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const int N_TRIALS = 10;

int main() {
    cout << "RAND_MAX is " << RAND_MAX << endl;
    cout << N_TRIALS << endl;
    for (int i = 0; i < N_TRIALS; i++) {
        cout << setw(10) << rand() << endl;
    }
    return 0;
}
