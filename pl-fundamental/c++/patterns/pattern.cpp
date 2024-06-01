#include<bits/stdc++.h>

using namespace std;

// https://practice.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1
void display1(int &n){
    for(int i=0; i<n; ++i){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

// https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2
void display2(int &n){
    for(int i=0; i<n; ++i){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display3(int &n){
    for(int i=0; i<n; ++i){
        for(int j = 1; j<=i+1; j++){
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display4(int &n){
    for(int i=0; i<n; ++i){
        int k=i+1;
        for(int j = 1; j<=k; j++){
            cout<<k;
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display5(int &n){
    for(int i=0; i<n; ++i){
        for(int j = n; j>i; --j){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display6(int &n){
    for(int i=0; i<n; ++i){
        for(int j = 1; j <= n-i; ++j){
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display7(int &n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i+1; ++j){
            cout<<"*";
        }
        for(int j=1; j<= n-i; ++j){
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

void display8(int &n){
    for(int i=0; i<n; ++i){
        for(int j = 0; j < i; ++j){
            cout<<" ";
        }
        for(int j=2*i; j<2*n-1; j++){
            cout<<"*";
        }
        for(int j = 0; j < i; ++j){
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

void display9(int &n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i+1; ++j){
            cout<<"*";
        }
        for(int j=1; j<= n-i; ++j){
            cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=0; i<n; ++i){
        for(int j = 0; j < i; ++j){
            cout<<" ";
        }
        for(int j=0;j< 2*n -(2*i +1); ++j){
            cout<<"*";
        }
        for(int j = 0; j < i; ++j){
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}
void display10(int &n){
    for(int i=0; i<2*n-1; ++i){
        int s = i;
        if(i>=n){
            s = 2*n -i-2;
        }
        for(int j = 0; j<=s; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void display10_1(int &n){
    for(int i=1; i<2*n; ++i){
        int s = i;
        if(i>=n){
            s = 2*n -i;
        }
        for(int j = 1; j<=s; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        display10_1(n);
    }
    return 0;
}