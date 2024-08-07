#include<iostream>
using namespace std;

int bits(int n){

  int count = 0;

  while(n!=0){
    if(n&1){
      count +=1;
    }
    n>>=1 ;
  }

  return count;
}


int main(){
  int a ;
  cout<<"Enter first number: ";
  cin>>a;
  
  int b ;
  cout<<"Enter second number: ";
  cin>>b;

  int a_bits = bits(a);
  int b_bits = bits(b);

  cout<< (a_bits + b_bits)<<endl;
  return 0;
}
