#include <iostream>
#include "babyratio.hpp"

using namespace std;

int main(){
  rational a(1,2);
  rational b(5,7);
  rational c(6,3);
  rational d(1,3);
  rational e(-1,1);
  rational f(3,8);
  rational g(6,2);
  a.add(b).sub(c).add(d).print();
  cout<<endl;
  a.print();
  cout<<" should still be 1/2"<<endl;
  return 0;
}
