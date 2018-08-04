#include <iostream>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t,n,flag=0;
	cin>>t;
	while(t--){
	    cin>>n;
		char *f,*r;
		char str[n];
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		f=&str[0];
		r=&str[n-1];
		while(r>f){
			if(*f!=*r){
				flag=1;
				cout<<"No"<<endl;
				break;
			}
			else{
				f++;
				r--;
			}
	}
	if(flag==0){
		cout<<"Yes"<<endl;
	}
}
return 0;
}
