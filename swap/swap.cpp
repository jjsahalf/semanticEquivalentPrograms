#include <iostream>
using namespace std;

void swap1(int &a, int &b)  {  
    if (a != b){  
        int c = a;  
        a = b;  
        b = c;  
    }  
}

void swap2(int &a, int &b){
    if (a != b){  
        a ^= b;  
        b ^= a;  
        a ^= b;  
    }  
}

int main(){
    int input1=2;
    int input2=3;
    
    swap1(input1,input2);
    
    cout<< input1 << "  "<< input2 <<endl;

    swap2(input1,input2);

    cout<< input1 << "  " << input2 <<endl;

    return 0;

}

