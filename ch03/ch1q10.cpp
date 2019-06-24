#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "Hello,world!";
    cout<<str<<endl;
    string tmp;
    for( auto c:str){
        if (!ispunct(c))
            tmp+=c;
    }
    cout<<tmp<<endl;
    return 0;
}