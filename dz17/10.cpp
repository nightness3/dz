#include <iostream>

using namespace std;

int main(){
    int c = 0;
    for (int i = 1098; i <= 13765; i++){
        if ((i % 2 == 0) && (i % 7 != 0) && (i % 11 != 0) && (i % 17 != 0) && (i % 23 != 0)){
            c++;
        }
    }
    cout << c << endl;
    for (int i = 1098; i <= 13765; i++){
        if ((i % 2 == 0) && (i % 7 != 0) && (i % 11 != 0) && (i % 17 != 0) && (i % 23 != 0)){
            cout << i;
            break;
        }
    }
}