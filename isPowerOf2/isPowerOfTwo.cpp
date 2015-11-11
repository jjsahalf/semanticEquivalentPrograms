#include <iostream>
using namespace std;

int isPowerOfTwo_1 (unsigned int x)
{
    while (((x % 2) == 0) && x > 1) /* While x is even and > 1 */
        x /= 2;
    return (x == 1);
}

int isPowerOfTwo_2 (unsigned int x)
{
    unsigned int numberOfOneBits = 0;
    while(x && numberOfOneBits <=1)
    {
        if ((x & 1) == 1) /* Is the least significant bit a 1? */
            numberOfOneBits++;
        x >>= 1;          /* Shift number one bit to the right */
    }
    return (numberOfOneBits == 1); /* 'True' if only one 1 bit */
}

int isPowerOfTwo_3 (unsigned int x){
    while (((x & 1) == 0) && x > 1) /* While x is even and > 1 */
        x >>= 1;
    return (x == 1);
}


int main(){
    unsigned int input=256;
    cout<<isPowerOfTwo_1(input)<<endl; 
    cout<<isPowerOfTwo_2(input)<<endl;
    cout<<isPowerOfTwo_3(input)<<endl;
    return 0;
} 



