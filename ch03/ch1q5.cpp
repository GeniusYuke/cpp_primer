#include <iostream>
#include <string>

using namespace std;

int main(){
    string input,total;
    while(cin>>input){
        total = total + input + " ";
    }
    cout<<total<<endl;
    
    return 0;
}