#include <iostream>
using namespace std;

int countBit1_1(int x){
	int cnt = 0;
	while (x) cnt += x & 0x01, x >>= 1;
	return cnt;
}


int countBit1_2(int x){
    int cnt = 0;
    while (x) x &= (x-1), cnt++;
    return cnt;
}



int main()
{
    int input =2;

    cout << countBit1_1(input)<<endl;
    cout << countBit1_2(input)<<endl;

    return 0;
    
}



