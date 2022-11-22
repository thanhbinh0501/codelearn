#include <iostream>
using namespace std;

int Solve(int a, int b) {
    int count = 0;
    for (int i = a; i<=b; i++) {
        int odd = 0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) {
                odd++;
            }
        }
        if (odd %2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    cout<<Solve(4,4);
    return 0;
}