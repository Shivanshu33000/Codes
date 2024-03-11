#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a = 5;
  int *b = &a;
  int **c = &b;
  cout << "Enter The Number :- ";
  cin >> *b;
  cout << **c << endl;
  cout << *b << endl;
  cout << a << endl;
  cout << &b << endl;
  cout << *&c << endl;
}
