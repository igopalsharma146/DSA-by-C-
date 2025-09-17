#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int ans=0;
    int i=1;
    float j=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+(bit*i);
        n=n>>1;
        i=i*10;
        j++;
    }
    cout<<"Final Answer : "<<ans;
}