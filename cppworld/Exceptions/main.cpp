#include "excbasic.cpp"
#include "own.cpp"





int main(){
excbasic p ;
//cangoWrong p;
// try{
// cangoWrong p;
// }

try
{
 p.maygowrogo();   
}

catch(MyException &e)
{
    std::cerr << *e.what() << '\n';
}


// try{
// //p.maygowrogo();

//}

// catch(int e){
//     cout << "error message :" <<e <<endl;
// }
    
// catch(char *e ){
//      cout << "error message :" <<e <<endl;
// }


 catch (string  &e ){
    cout << "error message :" << e <<endl;
 }   

  catch(bad_alloc e){
    cout << "error is " << e.what()<<endl; 
  }


cout <<"program is running bye" <<endl;
    return 0;
}

