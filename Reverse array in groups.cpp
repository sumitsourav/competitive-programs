#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x=0;
        cin>>n>>k;
        vector <int> arr(n),brr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;
        while(i<n){
        	int itr=i+k-1;
        	if(itr>=n){
        		itr=n-1;
			}
        	int temp=itr;
        	while(i<=itr){
        		brr[i]=arr[temp];
        		i++;
        		temp--;
			}
		}
		for(int j=0;j<n;j++){
			cout<<brr[j]<<" ";
		}
		cout<<endl;
    }
	return 0;
}
