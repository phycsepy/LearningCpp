#include <iostream>
#include <fstream>

using namespace std;

#define o(x) cout << #x <<": "<< x <<endl; 



template <typename ...T>

void out (T ...args ){

    ((cout << args <<" " ),...);

    cout << endl<<endl;
}


template <typename ...T>
void in(T& ...args){

    ((cin >> args  ),...);

}




void write();
void read();
void append();
void binw();
void binr();
void bina();


#pragma pack (push ,1)
struct  Person
{
    //string name; // while wrting binnary files string stores pointer obj so it will be converted into address rather than string so we need to use char insted
    char p[100]   ; 
    int age;
    double weight;

};
#pragma pack (pop)









int main(){
//write();
//append();
//read();
out("now size is without padding as struncture will use limited space as of now we removed padding so size of structure is sum of ele inside struct \n",sizeof(Person));
 binw();
 binr();
return 0;
}

void binr(){
    Person pers;
    
    ifstream in_file;
    string file_name = "Check.bin";
try{
in_file.open(file_name,ios::binary);
in_file.read(reinterpret_cast<char *>(& pers) ,sizeof(Person));
}
catch (exception &e){
    out("not able to open due to err :",&e);
}
 out(pers.age,pers.weight,pers.p);
}


void binw(){
  Person sathu={"Sathwik",17,85} ;
 ofstream out_file;
 string file_name = "Check.bin";

try{
out_file.open(file_name,ios::binary); 

//out_file.write((char *)&sathu,sizeof(Person)); to good way
out_file.write(reinterpret_cast<char *>(& sathu) ,sizeof(Person));// idea way
}
catch(exception &e){
 out("not able to open due to err :" ,&e);
}

out_file.close();



}






// appending inside a file

void append(){
ofstream out_file;
string file_name = "Dairy.txt";

out_file.open(file_name,ios::app);
if(! out_file.is_open()){
    cout << "file not able to open with below "<<endl;
}
else{

    out_file <<"I am back with c++"<<endl;
    out_file<< "lets rock the show"<< endl;

}



}


// reading 
void read(){
    ifstream in_file;
    string in_file_name = "Dairy.txt";

    in_file.open(in_file_name); // opeing file 

    if( !in_file.is_open()){
        // checking file why it not opeing 
        
          cout<< "not able to open" << in_file_name<<endl;
    }

   
      

        string line;

        while(in_file){
            getline(in_file,line);
             in_file >> ws;
             if (!in_file) break;
            cout <<line<<endl;
        }
        
        in_file.close();



    

}







//wrting inside a file

void write(){

  ofstream out_file; //ofstream for output 

 string output_file_name = "Dairy.txt";
 out_file.open(output_file_name);

 if( ! out_file.is_open()){
    cout << "Count not created file "<<output_file_name<<endl;
 }

    

     
    out_file <<"Hi this is Kundan  He need to master English and programming "<<endl;
    out_file <<  "Need to change life style "<<endl; // we have to always keep end of line empty 
    out_file.close();


}