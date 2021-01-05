#include<iostream>
#include<vector>
#include<random>
#include<cstdlib>
#include<time.h>
#include<algorithm>

struct codeforces
{
    void solution(){
        std::cout << "Hello World!" << std::endl;
    }    
};



using namespace std;

int main(){
    codeforces cd;
    for(int i = 1 ; i <= INT8_MAX ; i++) cd.solution() ;
    cout << INT8_MAX << endl;
    cout << INT16_MAX << endl;
    cout << INT32_MAX << endl;
    cout << INT64_MAX << endl;
    cout << INT_FAST64_MAX << endl;

    return 0 ;
}