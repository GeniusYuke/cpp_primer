#include <iostream>
int main(){
    int *val = 0;
    int i = 10;
    val = &i;
    *val = 9;
    std::cout<<i<<std::endl;
    return 0;
}