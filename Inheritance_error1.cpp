#include<iostream>
class base1{
    int b1;
};
class base2{
    int b2;
};
class derived:public base1,base2{};
int main(){std::cout<<"successful\n"; return 0;}