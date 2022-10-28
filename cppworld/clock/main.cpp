#include <iostream>
#include <ctime>

using namespace std;

long convert(int );


int main(){
    time_t s_time,now;

    
    int val;
    cin >> val;
    long long  time_needed = time(&s_time) + convert(val);
    while (1){

    long long now_time= time(&now);
        
        if(time_needed ==now_time ){
            cout << '\07';
            cout << '\07';
            cout << '\07';
            cout << '\07';
            cout << '\07';
            break;
        }


    }
    
    return 0;




}

long convert(int a){
    //20 min 1200 1min = 60sec  60 *20
    return a*60;
}
