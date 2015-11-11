#include <iostream>
using namespace std;

unsigned flp2_1 (unsigned x){
    x=x|(x>>1);
    x=x|(x>>2);
    x=x|(x>>4);
    x=x|(x>>8);
    x=x|(x>>16);
    return x-(x>>1);
}

unsigned flp2_2 (unsigned x){
    unsigned y=0x80000000;
    while(y>x){
        y=y>>1;
    }
    return y;
}

unsigned flp2_3 (unsigned x){
    unsigned y;
    do{
        y=x;
        x=x&(x-1);
    }while(x!=0);
    return y;
}


int main(){
    unsigned input = 37;
    cout<<flp2_1(input)<<endl;
    cout<<flp2_2(input)<<endl;
    cout<<flp2_3(input)<<endl;
    return 0;
}


