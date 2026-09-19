#include<bits/stdc++.h>
using namespace std;
int f(int n){
  if(n%4 == 0 ) return n;
  else if(n% 4 == 1) return 1;
  else if(n % 4 == 2) return n+2;
  else return 0;
}
int main(){
    int l,r;
    cin>>l>>r;
    int ans1 = f(l);
    int ans2 = f(r);
    int ans = ans1^ans2;
    cout<<ans<<endl;
}