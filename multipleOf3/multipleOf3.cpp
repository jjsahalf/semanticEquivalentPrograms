#include <iostream>
using namespace std;

int isMult3_1(unsigned int n)
{
    int even_c = 0;
    int odd_c = 0; //variables to count odd and even SET bits
    // Terminating condition for the recursive routine.
    if (n == 0)    // return true if difference is 0.
        return 1;
    if (n == 1)    // return false if the difference is not 0.
        return 0;
    while(n) {
        if (n&1)   // odd bit is SET, increment odd_C
            odd_c++;
        n = n >> 1; 
        if (n&1)   // even bit is SET, increment even_c
            even_c++;
        n = n >> 1;
    }
    // Recursive call this function till you get 0/1 as the difference
    return(isMult3_1(abs(odd_c - even_c)));
}

int isMult3_2(unsigned int n){
    int remainder=n%3;
    if(remainder==0){
        return 1;
    }else{
        return 0;
    }
}

int isMult3_3(unsigned int n){
    int accumulator=0;
    while(n!=0){
        accumulator+=n%10;
        n=n/10;
    }
    int remainder=accumulator%3;
    if(remainder==0){
        return 1;
    }else{
        return 0;
    }   
}


int main(){
    unsigned int input =669;
    cout<<isMult3_1(input)<<endl;
    cout<<isMult3_2(input)<<endl;
    cout<<isMult3_3(input)<<endl;
    return 0;

}
