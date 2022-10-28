#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> read(string filename);
void write(vector<string> a,vector<string>b);
vector<string> trun3(vector <string>);

int main(){
 

//  for (auto i : read("weight.txt")){
//     cout <<i <<" "<<endl;
//  }

// for (auto i : read("filenames.txt")){
//     cout <<i <<" "<<endl;
//  }
string file_1="filenames.txt";
string file_2="weight.txt";

write(trun3(read(file_1)),read(file_2));
// for (auto i: trun3(read(file_1))){
//     cout <<i << endl;
// }


    return 0;
}

vector<string> trun3(vector <string>arr){
    //remove
    vector<string> ans;
    for(auto i:arr){
        string check=i;
        check.erase(0,2);
        ans.push_back(check);
    }
    return ans;
}


void write(vector<string> a,vector<string>b){

//write function will write  in txt saying a:b
ofstream writefile;
string filename = "end_file.txt";
try{

writefile.open(filename);
int length =min(a.size(),b.size());

for(int i=0;i<length;i++){
    writefile << a[i]<<":"<<b[i]<<endl;
}

}

catch(exception &e){
 cout << "not able to open due to err :" << &e;
}

}





vector<string> read(string filename){
ifstream readfile;
vector<string>filenames;
try{
readfile.open(filename);

string line;

        while(readfile){
            getline(readfile,line);
             readfile >> ws;
             if (!readfile) break;
            filenames.push_back(line);

        }
        
        readfile.close();


}


catch(exception &e){
 cout << "not able to open due to err :" << &e;
}

return filenames;
}
