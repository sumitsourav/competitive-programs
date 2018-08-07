#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,count;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char str[n];
	    count=0;
	    for(int i=0;i<n;i++){
	        cin>>str[i];
	        if(str[i]=='1'){
	        	count++;
			}
	    }
	    cout<<((count)*(count-1))/2<<endl;
    }
return 0;
}
