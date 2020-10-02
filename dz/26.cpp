#include <iostream>

using namespace std;

int s = 0;

int F( int n )
{
  s = s + n + 1;
  if( n > 1 ) {
    s = s + n + 5;
    F(n-1);
    F(n-2);
    }
}


int main(){
    for (int i = 0; i < 1000; i++){
        if (F(i) > 1000000){
            cout << i << " " << F(i) << endl;
            break;
        }
    }
}