#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main(){
    int a[6]={3,2,9,4,1,-2};
    int  b[6];
    b[0]=a[0];
    for(int i=1;i<6;i++){
        b[i] = a[i]*i + b[i-1];
    }

    vector<long long int >prefixSum(6);
    prefixSum[0]=a[0];
    for (int i = 1; i < 6; i++)
    {
        prefixSum[i]=prefixSum[i-1] + a[i];
    }
    int Q;
    cin>>Q;
    while (Q--)
    {
        int L,R;
        cin>>L>>R;
        L--,R--;
        long long int result =0;
        result = (prefixSum[R]-(L>0 ? prefixSum[L-1]: 0))% MOD;
        // add contribution of b
        result += (b[R] -(L>0 ? b[L-1]:0)) % MOD;
        
        result %= MOD;
        cout<<result<< "  ";
    }
    
    

}
