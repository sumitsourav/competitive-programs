#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    char *f,*r,*t;
	    r=&str[str.length()-1];
	    for(f=r;f>=&str[0];f--){
	        if((*f)=='.'){
	        	t=f+1;
	        	while(t<=r){
	        		cout<<*t;
	        		t++;
				}
				cout<<".";
				r=f-1;
			}
			else if(f==&str[0]){
	            while(f<=r){
		            cout<<*f;
		            f++;
		       }
		       break;
           }	
	    }
	    cout<<endl;
   }
  return 0;
}
