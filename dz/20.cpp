#include <iostream>

using namespace std;

int G(int n);

int F(int n){
    if (n == 1){
        return 1;
    } else if (n > 1){
        return 3*F(n-1) + G(n-1) - n + 5;
    }
}

int G(int n){
    if (n == 1){
        return 1;
    } else if (n > 1){
        return F(n-1) + 3*G(n-1) - 3*n;
    }
}

int main(){
    cout << F(14) + G(14) << endl;
}