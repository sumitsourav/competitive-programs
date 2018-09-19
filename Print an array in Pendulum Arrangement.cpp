#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y,k;
        vector <int> arr(n),brr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        k=(n-1)/2;
        brr[k]=arr[0];
        x=k;
        y=k;
        for(int i=1;i<n;i=i+2){
                x=x+1;
                brr[x]=arr[i];
                y=y-1;
                if(y>=0){
                brr[y]=arr[i+1];
                }
        }
        for(int q=0;q<n;q++){
            cout<<brr[q]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
