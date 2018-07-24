#include <iostream>
using namespace std;

void equilibrium(int a[],int n){
    int i,j,k;
    int sum1,sum2;
    for(i=1;i<=n;i++){
        if(n==1){
            cout<<i<<endl;
            break;
        }
        sum1=0;
        sum2=0;
        for(j=i-1;j>=1;j--){
                sum1=sum1+a[j];
            }
        for(k=i+1;k<=n;k++){
            sum2=sum2+a[k];
        }
        if(sum1==sum2){
                cout<<i<<endl;
                break;
            }
        else if(sum1!=sum2 && i==n){
                cout<<-1<<endl;
                break;
            }
    }
}


int main() {
    int t,n;
    int a[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        equilibrium(a,n);
    }
	return 0;
}
