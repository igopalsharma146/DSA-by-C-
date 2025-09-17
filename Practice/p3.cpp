/*
5
1234554321
2345**5432
345****543
45******54
5********5
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){

        //for first triangle
        int j=1;
        while(j<=n-i+1){
            cout<<i+j-1;
            j=j+1;
        }

        //for second triangle
        int k=2*i-2;
        while(k>0){
            cout<<'*';
            k=k-1;
        }

        //for third triangle
        int l=1;
        while(l<=n-i+1){
            cout<<n-l+1;
            l=l+1;
        }

        cout<<endl;
        i=i+1;

    }
}