#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,i;
	cin>>n;
	cin>>x;
	vector<int> a(n); 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==x){  
			cout<<i;
            break;
        
        }
        
	} 
    if(i==n)
    cout<<"-1";
	return 0;
}
