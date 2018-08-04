#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
    int t,n,flag;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> num(n);
        vector<int>::iterator ptr;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        flag=0;
        for(ptr=num.begin();ptr<num.end();ptr++){
            int left_sum=accumulate(num.begin(),ptr,0);
            int right_sum=accumulate(ptr,num.end(),0)-(*ptr);
            if(left_sum==right_sum){
            	flag=1;
                cout<<ptr-num.begin()+1<<endl;
                break;
            }
        }
        if(flag==0){
        	cout<<-1<<endl;
		}
    }
    return 0;
}
