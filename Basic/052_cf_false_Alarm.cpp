#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int first = -1, last = -1;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                if(first==-1) first = i;
                last = i;
            }
        }
        int y = last-first+1;
        if(first==-1){
            cout<<"Yes\n";
        }else if(y<=x){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}