#include <iostream>
using namespace std;

void pbv(int i1)
{
  i1 ++;
  cout << "value of parameter is " << i1 << endl;
}

void pbr(int& i2)
{
  i2 ++;
    cout << "value of parameter is " << i2 << endl;
}

int main()
{
  int a = 2;
  int b = 2;
  cout << "value of argument a is " << a << endl;
  cout << "value of argument b is " << b << endl;
  pbv(a);
  cout << "value of argument a now is " << a << endl;
  pbr(b);
  cout << "value of argument b now is " << b << endl;

  return 0;
}
