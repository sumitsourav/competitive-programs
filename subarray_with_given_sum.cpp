#include <iostream>
using namespace std;

int positin(int a[],int n,int s){
    int sum=0,k=1,i;
    for(i=1;i<=n;i++){
        sum=sum+a[i];
        if(sum==s){
            break;
        }
        else if(sum>s){
            sum=sum-a[k];
            k++;
            if(sum==s){
                break;
            }
        }
        
    }
    if(sum==s){
    cout<<k<<" "<<i<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}

int main() {
    int t,n,s;
    int a[200];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        for(int j=1;j<=n;j++){
            cin>>a[j];
      }
      positin(a,n,s);
    }
    return 0;
}
