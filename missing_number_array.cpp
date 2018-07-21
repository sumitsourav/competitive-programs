#include <iostream>
using namespace std;

int missnum(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        if(i!=a[i]){
            break;
        }
    }
    return (i);
}


int main() {
    int a[1000],t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    for(int j=1;j<=n-1;j++){
	        cin>>a[j];
	    }
	    int missing=missnum(a,n);
	    cout<<missing<<endl;
	    missing=0;
	}
	return 0;
}
