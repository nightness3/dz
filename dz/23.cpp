#include <iostream>

using namespace std;

int s = 0;

void F(int n)
{
  s++;
  if( n >= 1 ) {
    s++;
    F(n-1);
    F(n-3);
    s++;
    }
}

int main(){
    F(40);
    cout << s;
}