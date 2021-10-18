#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col,i,j;
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++) {
            if((i+j)%2) cout<<"0";
            else
            cout<<"1";
        }
        cout<<endl;
    }
}