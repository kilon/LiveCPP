#include <dlfcn.h>
#include <iostream>
#include "myclass.h"
#include <string>

using namespace std;

int main( int argc , char **argv)
{
  string answer ="y"; 
  while(answer=="y")
  {
    void* handle = dlopen("./myclass.so", RTLD_LAZY);

    MyClass* (*create)();
    void (*destroy)(MyClass*);

    create = (MyClass* (*)())dlsym(handle, "create_object");
    destroy = (void (*)(MyClass*))dlsym(handle, "destroy_object");

    MyClass* myClass = (MyClass*)create();
    myClass->DoSomething();
    destroy( myClass);
    cout<<"\n You want to continue ? [y/n]\n";
    cin>>answer;
    cout<<"\n";
    dlclose(handle);
     
  }
}
