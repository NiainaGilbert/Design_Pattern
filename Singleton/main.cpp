#include <iostream>
#include "Singleton.h"
int main()
{
    Singleton *s1 = Singleton::getInstance(); 
    Singleton *s2 = Singleton::getInstance();
    if(s1 == s2)
    {        std::cout << "s1 and s2 are the same instance." << std::endl;
    }
    else
    {        std::cout << "s1 and s2 are different instances." << std::endl;
    } 
}