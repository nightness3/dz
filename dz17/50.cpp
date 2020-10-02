#include <iostream>

using namespace std;

int main(){
    int s = 0;
    int t;
    for (int i = 331; i <= 8751; i++){
        t = i;
        int k16, k10;
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
        if ((k10 == k16) && ((i % 5 == 0)&&(i % 25 != 0))){
            s++;
        }
    }
    cout << s << endl;
    for (int i = 331; i <= 8751; i++){
        t = i;
        int k16, k10;
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
        if ((k10 == k16) && ((i % 5 == 0)&&(i % 25 != 0))){
            cout << i << endl;
            break;
        }
    }
}