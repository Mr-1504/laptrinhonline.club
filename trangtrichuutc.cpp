#include<bits/stdc++.h>
using namespace std;
void trang_tri_utc(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<n;j++){
            cout<<"   ";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<n;j++){
            cout<<"**";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<n;j++){
            cout<<"**";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<n;j++){
            cout<<"****";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<3;k++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            for(int j=0;j<n;j++){
                cout<<"   ";
            }
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            for(int j=0;j<n;j++){
                cout<<"  ";
            }
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            for(int j=0;j<n;j++){
                cout<<"  ";
            }
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            for(int j=0;j<n;j++){
                cout<<"  ";
            }
            cout<<endl;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*****";
        }
        for(int j=0;j<n;j++){
            cout<<"  ";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<n;j++){
            cout<<"  ";
        }
        for(int j=0;j<n;j++){
            cout<<"*****";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        trang_tri_utc(x);
    }
}