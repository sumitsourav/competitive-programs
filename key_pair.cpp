#include <iostream>
using namespace std;

int main() {
	int a[200],t,n,x;
	int flag=0;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    for(int k=1;k<=n;k++){
	    	int b=n;
	        while(b!=k){
	            if(a[k]+a[b]==x){
	                cout<<"Yes"<<endl;
	                flag=1;
	                break;
	            }
	            else{
	                b--;
	            }
	        }
	        if(flag==1){
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
