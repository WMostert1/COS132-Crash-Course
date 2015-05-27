#include <iostream>
#include "foo.h"

int main(int argc, char *argv[])
{
int x=42;
std::cout << x <<std::endl;
std::cout << foo(x) << std::endl;
return 0;
}