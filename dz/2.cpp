#include <iostream>

using namespace std;

int F(int n){
    if (n == 1){
        return 3;
    } else {
        return 2*F(n-1) - n + 1;
    }
}

int main(){
    cout << F(21) << endl;
}