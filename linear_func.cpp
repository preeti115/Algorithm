#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
int main() {
	int n,x,i;
	cin>>n;
	cin>>x;
	vector<int> a(n); 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<search(a,n,x);
	return 0;
}
