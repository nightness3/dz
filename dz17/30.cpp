#include <iostream>

using namespace std;

int main(){
    int s = 0;
    for (int i = 1529; i <= 9482; i++){
        if ((i % 2 == 0) && (i % 5 == 3)){
            s = s + i;
        }
    }
    cout << s << endl;
    for (int i = 1529; i <= 9482; i++){
        if ((i % 2 == 0) && (i % 5 == 3)){
            cout << i;
            break;
        }
    }
}