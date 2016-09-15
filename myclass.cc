
#include <iostream>
#include <string>
#include "myclass.h"

using namespace std;

extern "C" MyClass* create_object()
{
  return new MyClass;

}

extern "C" void destroy_object(MyClass* object)
{
  delete object;
}

MyClass::MyClass()
{
  x = "hello world and goodbye!!!\n Yeahh\n Live Coding Works in C++\n";
}

void MyClass::DoSomething()
{

  cout << x << endl;

}


