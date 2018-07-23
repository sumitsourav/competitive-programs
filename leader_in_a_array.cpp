#include <iostream>
using namespace std;

void leader(int a[],int n){
    int i,j;
    for(i=1;i<=n;i++){
        j=i+1;
        if(j>n){
            cout<<a[i]<<" ";
        }
        while(j<=n){
            if(a[i]<=a[j]){
                break;
            }
            else if(j==n){
                cout<<a[i]<<" ";
            }
            
            j++;
        }
    }
}

int main() {
    int n,t;
    int a[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        leader(a,n);
        cout<<endl;
    }
	return 0;
}
