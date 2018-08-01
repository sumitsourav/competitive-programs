#include<iostream>
#include<string>
using namespace std;
string cmp(string s1,string s2){
	int l1=s1.length(),l2=s2.length(),k=0;
	string an="";
	while(s1[k]==s2[k]){
		an+=s1[k];
		k++;
	}
	return an;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		string ans="";
		if(n==1){
			ans=s[0];
		}
		else{
			for(int i=0;i<n;i++){
				if(i==0){
					ans=cmp(s[i],s[i+1]);
				}
				else if(i>0){
					ans=cmp(ans,s[i]);
				}
			}
		}
		if(ans.length()!=0){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
