#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={4,2,3,1,-5,6};
    int prefixA[6];
    prefixA[0] = arr[0];
    for(int i=1;i<6;i++){
        prefixA[i]= prefixA[i-1]+arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout<< prefixA[i]<<" ";
    }
    // find the sum of array element in the range like [2,4]
    cout<<"\nEnter the L and R respectively : ";
    int L,R;
    cin>>L>>R;
    cout<<"Sum of the array elements in the range of L to R : "<<prefixA[R]-prefixA[L-1];
    
}