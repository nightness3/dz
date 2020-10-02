#include <iostream>

using namespace std;

int main(){
    int s = 0;
    for (int i = 1871; i <= 9197; i++){
        int k16, k10;
        int t = i;
        while (i > 0){
            k16++;
            i = i / 16;
        }
        i = t;
        while (i > 0){
            k10++;
            i = i / 10;
        }
        i = t;
        if ((k16 != k10) && ((i % 9 == 2) || (i % 9 == 4))){
            s++;
        }
    }
    cout << s << endl;
    for (int i = 1871; i <= 9197; i++){
        int k16, k10;
        int t = i;
        while (i > 0){
            k16++;
            i = i / 16;
        }
        i = t;
        while (i > 0){
            k10++;
            i = i / 10;
        }
        i = t;
        if ((k16 != k10) && ((i % 9 == 2) || (i % 9 == 4))){
            cout << i;
            break;
        }
    }
}