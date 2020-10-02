#include <iostream>

using namespace std;

int F(int n){
    if (n > 18){
        return n;
    }
    if (n <= 18){
        return 3*F(n+1) + n + 8;
    }
}

int main(){
    cout << F(9) << endl;
}