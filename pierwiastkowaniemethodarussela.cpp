#include <iostream>
using namespace std;

int main(){
  float squareroot = 0;
  float number;

  cout << "enter a number sp that i can calculate its squareroot" << endl;

  cin >> number;

  while (squareroot * squareroot < number){
      squareroot+=0.001;
  }

  cout << "the square root is" << squareroot << endl;
  return 0;
}
