#include <iostream>
#include <string>

template <typename ...T>

void o(T ...args){
    ((std::cout << args<<" "),...);
    std::cout <<std::endl<<std::endl;
}

template <typename ...T>

void i(T& ...args){
 ((std::cin >> args),...);
}


/*

Create a class named 'Student' with String variable 'name' and integer variable 'roll_no'. 
Use Constructors to Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

Write Down the Entire Code for the above Question in your IDE and copy paste the code here.

Since OOPS is a very important Topic this task will be checked Manually by the mentor. 

If there is any confusion make sure to ask the mentor and get it resolved . 


*/

class Student{
private:
 int roll_no;
 std::string name;
 public:
 Student(int val,std::string str){
    roll_no=val;
    name=str;
 }

void display(){
    o("Age :",roll_no);
    o("Name : ",name);
}

    

};

class Triangle{
int l {0}, b{0}, h{0};
public:
  Triangle(int val,int val2,int val3){
    l=val;
    b=val2;
    h=val3;    
  }

double area_of(){
  return (b*h)/2;
}
double premimeter_of(){
  return l+b+h;
}



};

int main(){

//  Student s1 = Student(21,"John");
//  s1.display();

Triangle one = Triangle(3,4,5);
o("area :",one.area_of(),"premeter :",one.premimeter_of());

 return 0;
}

