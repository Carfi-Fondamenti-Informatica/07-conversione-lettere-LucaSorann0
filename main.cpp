#include <iostream>
#include "lib.cpp"
using namespace std;

int main(){
  char let = 'a';
  cin >> let;
  if (lettera(let)) {
    cout << let;
} else {
    cout << "errore";
  }
  return 0;
}
