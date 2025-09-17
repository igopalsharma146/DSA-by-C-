//second method to convert decimal to binary
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    //int ans=0;     --> this will not work for large numbers 
    float ans=0;     //--> this will work for large numbers 
    int i=0;
    while(n!=0){
        int bit=n&1;
        cout<<"Bit : "<<bit <<endl;
        ans=ans+(bit*pow(10,i));
        cout<<"Answer ="<<ans<<endl;
        n=n>>1;
        i++;
    }
    cout<<"Final Answer : "<<ans;
}