/*http://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,temp;
    cin>>t;
    
    while(t--){
    cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
	cin>>temp;
	arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
        
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;
        
    }
    
	return 0;
}
