#include <iostream>
using namespace std;


int getABS1(int n){
  return (n ^ (n >> 31)) - (n >> 31);
}

int getABS2(int n){
  return n > 0 ? n : -n; 
}

int getABS3 (int n) {
  return n * ((n>0) - (n<0));
}




int main ()
{
  int positive=8;
  int negative=-8;

  cout<< getABS1(positive) << " "<<getABS1(negative)<<endl;
  cout<< getABS2(positive) << " "<<getABS2(negative)<<endl;
  cout<< getABS3(positive) << " "<<getABS3(negative)<<endl;

  return 0;
}
