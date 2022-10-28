
#include <iostream>

class MyException :public std::exception{
public:virtual const char * what ();

};