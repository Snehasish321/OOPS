#include <iostream>
using namespace std;

class X
{
public:
  X()
  {
    cout << "X ";
  }
  ~X()
  {
    cout << " ~X ";
  }
};

class Y : public X
{
public:
  Y()
  {
    cout << "Y ";
  }
  virtual ~Y()
  {
    cout << " ~Y ";
  }
};

class Z : public Y
{
public:
  Z()
  {
    cout << "Z ";
  }
  ~Z()
  {
    cout << " ~Z ";
  }
};

int main()
{
  X *t1 = new Z;
  delete t1;
  return 0;
}