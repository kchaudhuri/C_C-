#include <iostream>
using namespace std;

//function templates

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

template <class U, class V>
V GetMin (U a, V b) {
  V result;
  result = (a<b)? a : b;
  return (result);
}

int main () {
  int i=5, j=6, k, o;
  float l=10.9, m=5.6, n, p;

  k=GetMax(i,j);
  n=GetMax(l,m);
  cout << k << endl;
  cout << n << endl;

  o=GetMin(i,l);
  p=GetMin(j,m);
  cout << o << endl;
  cout << p << endl;
  return 0;
}
