#include <iostream>

using namespace std;

int F(int n){
    if (n <= 1){
        return 3;
    } 
    if (n > 1){
        return F(n-1) + 2*F(n-2) - 5;
    }
}

int main(){
    cout << F(22) << endl;
}