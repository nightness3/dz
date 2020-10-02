#include <iostream>

using namespace std;

int F(int n){
    if (n == 1){
        return 1;
    } else if (n % 2 == 0){
        return 2*F(n-1);
    } else if (n % 2 == 1){
        return 5*n + F(n-2);
    }
}

int main(){
    cout << F(9) << endl;
}