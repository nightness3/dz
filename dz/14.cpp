#include <iostream>

using namespace std;

int F(int n){
    if (n < 0){
        return -1*n;
    } else if (n % 2 == 0){
        return 2*n + 1 + F(n-3);
    } else if (n % 2 == 1){
        return 4*n + 2*F(n-4);
    }
}

int main(){
    cout << F(33) << endl;
}