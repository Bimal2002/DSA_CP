#include<bits/stdc++.h>
using namespace std;
int main(){
    //   int arr[6]={1,2,3,4,5,6};
      cout<<"Enter the range [L,R] and the value you want to add : ";
      int L,R,V;
      cin>>L>>R>>V;
      int p[6]={0};
      p[L] +=V;
      p[R+1] -=V;
      int prefix[6]={0};
      prefix[0]=p[0];
      for(int i=1;i<6;i++){
          prefix[i]=p[i]+prefix[i-1];
      }
      cout<<"Ans : ";
      for (int i = 0; i < 6; i++)
      {
        cout<<prefix[i]<<" ";
      }
      

}