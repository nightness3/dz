#include <iostream>

using namespace std;

int main(){
    int c = 0;
    for (int i = 1045; i <= 8963; i++){
        if (((i % 5 == 0) || (i % 7 == 0)) && (i % 11 != 0) && (i % 13 != 0) && (i % 17 != 0) && (i % 19 != 0)){
            c++;
        }
    }
    cout << c << endl;
    for (int i = 1045; i <= 8963; i++){
        if (((i % 5 == 0) || (i % 7 == 0)) && (i % 11 != 0) && (i % 13 != 0) && (i % 17 != 0) && (i % 19 != 0)){
            cout << i;
            break;
        }
    }
}