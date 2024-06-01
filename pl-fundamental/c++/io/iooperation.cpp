#include<iostream>
using namespace std;

void insert(){
    int n, value;
    cout<<"Number of item\n";
    cin>>n;
    for(int i=0;i<n; i++){
        cout<<"Insert Value";
        cin>>value;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<t<<" ";
        insert();
    }
    return 0;
}