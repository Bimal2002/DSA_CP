#include<bits/stdc++.h>
using namespace std;
void PrintBinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
void setBit(int num ,int i){
    if((num>>i)&1){
       cout<<i<<"th bit is set ";
    }else{
        cout<<i<< "th not is set ";
    }
}

int main(){
  int num = 7;
  PrintBinary(num);
  cout<<endl;
  setBit(num,4);
  // function  to count set bit
  cout<<endl<<"number of set bit "<<__builtin_popcount(num)<<endl;
  cout<<endl<<"number of set bit "<<__builtin_popcountll(num)<<endl; // ll if number is greater than 32
  for(int i=0;i<8;i++){
    PrintBinary(i);
    if(i&1){
        cout<<"Odd \n";
    }else{
        cout<<"even\n";
    }
  }
  cout<<"divide by 2 :" <<(num>>1)<<endl;
  cout<<"multiple by 2 : "<<(num<<1)<<endl;
  // check the number is  power of 2 form or not
  if((num)&(num-1)!=0){
    cout<<"number is not power of 2 form"<<endl;

  }else{
    cout<<"number is not power of 2 form "<<endl;
  }

 
}