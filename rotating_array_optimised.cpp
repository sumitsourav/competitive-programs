#include <iostream>
using namespace std;

void rotate(int a[],int n,int d){
    int i;
    for(i=0;i<n;i++){
        cout<<a[((i+d)%n)]<<" ";
   }
}

int main(){
    int n,d;
    int a[1000];
        cin>>n>>d;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        rotate(a,n,d);
    return 0;
}
