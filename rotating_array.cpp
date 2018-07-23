#include <iostream>
using namespace std;

void rotate(int a[],int n,int d){
    int i,j,t;
    int b[n];
    for(i=1;i<=n;i++){
        j=i;
        t=d;
        while(t!=0){
            j--;
            if(j==0){
                j=n;
            }
             t--;
        }
        b[j]=a[i];
    }
    for(int k=1;k<=n;k++){
        cout<<b[k];
    }
}

int main(){
    int n,t,d;
    int a[1000];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        cin>>d;
        rotate(a,n,d);
    }
    return 0;
}
