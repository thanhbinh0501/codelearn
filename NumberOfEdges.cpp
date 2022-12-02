#include <iostream>
using namespace std;

int edgesNumber(int n)
{
    int mat = n+2;
    int dinh = n*2;
    int canh = n*3;
    return mat+dinh+canh;
}
int main(){
    int n = 5;
    int sum = edgesNumber(n);
    cout<<"Sum = "<<sum;
    return 0;
}