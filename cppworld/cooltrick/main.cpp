#include <iostream>

//#define o(x) std::cout << #x <<" "<< x <<std::endl; 
//#define i(x) std::cin >> x;

template <typename ...T>

void o(T ...args){
    ((std::cout << args<<" "),...);
    std::cout <<std::endl<<std::endl;
}
template <typename ...T>

void i(T& ...args){
 ((std::cin >> args),...);
}

int main(){

o(1,2,3,"asd",'c');

    return 0;
}