#include <iostream>

using namespace std;

int s = 0;

int F( int n )
{
  s = s + n - 5;
  if( n > 1 ) {
    s = s + n + 8;
    F(n-2);
    F(n-3);
    }
}


int main(){
    for (int i = 0; i < 1000; i++){
        if (F(i) > 3200000){
            cout << i << " " << F(i) << endl;
            break;
        }
    }
}