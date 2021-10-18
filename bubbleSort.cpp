#include<bits/stdc++.h>
using namespace std;
void doBubble(int ar[],int n) {
        int i,j,cnt=1;
        int k = n;
        for(i=0;i<n-1;i++){
            for(j=0;j<k-1;j++){
                if(ar[j+1] < ar[j]){
                    int temp = ar[j+1];
                    ar[j+1] = ar[j];
                    ar[j] = temp;
                }
                cnt++;
            }
            cout<<"Count is "<<cnt<<endl; 
            k--;
            
        }

        cout<<"i is "<<i<<endl;
       


}
int main(){
    int n,i,ar[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    doBubble(ar,n);
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}