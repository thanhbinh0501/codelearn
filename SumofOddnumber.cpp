#include <iostream>
using namespace std;

int sumOdd(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0){
            sum = sum + i;
        }
    }
    return sum;
}

int main(){
    int n = 4;
    int sum = sumOdd(n);
    cout<<"Sum = "<<sum;
    return 0;
}