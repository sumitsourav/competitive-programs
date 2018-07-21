#include<iostream>>
using namespace std;
int main() {
    int a[100000],t,n;
    int b[3]={0,0,0};
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]==0){
            b[0]++;
        }
        else if(a[j]==1){
            b[1]++;
        }
        else if(a[j]==2){
            b[2]++;
        }
      }
        for(int k=0;k<3;k++){
        while(b[k]!=0){
            cout<<k<<" ";
            b[k]--;
        }
        
       }
       cout<<endl;
    }
	return 0;
}
