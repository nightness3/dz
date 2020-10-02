#include <iostream>

using namespace std;

int F(int n){
    if (n < 3){
        return n + 3;
    } else if (n % 3 == 0){
        return (n + 2)*F(n-4);
    } else if (n % 3 != 0){
        return n + F(n-1) + 2*F(n-2);
    }
}

int main(){
    cout << F(20) << endl;
}