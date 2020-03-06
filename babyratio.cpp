#include <iostream>

#ifndef CONTEST
#include "babyratio.hpp"
#endif

using namespace std;

rational::rational (int n, int d) {nom=n; den=d;}

rational rational::add (rational r) {
  int x=nom*r.den+r.nom*den;
  int y=den*r.den;
  int z=gcd(x,y);
  return rational(x/z, y/z);
}

rational rational::sub (rational r) {
  int x=nom*r.den-r.nom*den;
  int y=den*r.den;
  int z=gcd(x,y);
  return rational(x/z, y/z);
}

rational rational::mul (rational r) {
  int x=nom*r.nom;
  int y=den*r.den;
  int z=gcd(x,y);
  return rational(x/z, y/z);
}

rational rational::div (rational r) {
  return mul(rational(r.den,r.nom));
}

void rational::print(){
  cout<<nom<<"/"<<den;
}

int rational::gcd(int a, int b){
  a=abs(a); b=abs(b);
  while (a>0 && b>0){
    if (a>b) a%=b;
    else b%=a;
  }
  return a+b;
}
