#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "Hello world!";
    cout<<str<<endl;
    for ( auto &c:str){
        c = 'X';
    }
    cout<<str<<endl;
    return 0;
}