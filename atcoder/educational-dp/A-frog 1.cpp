#include<bits/stdc++.h>

using namespace std;

int main(){
	/* solution 1
	
	int N;
	cin>>N;
	int arr[N];
	vector<int> v;

	for(int i=0;i<N;i++){
		int k;
		cin>>k;
		v.push_back(k);
	}

	arr[0] = 0;
	arr[1] = abs(v[0]-v[1]);


	for(int i=2;i<N;i++){
		arr[i] = min(arr[i-1]+abs(v[i-1]-v[i] ),arr[i-2]+abs(v[i-2]-v[i]));
	}
	cout<<arr[N-1];

	return 0;

	*/
	int INF = 2147483647;

	int n;
	cin>>n;
	int arr[n];
	vector<int> v;


	for(int i=0;i<n;i++){
		arr[i] = INF;
		int x;
		cin>>x;
		v.push_back(x);
	}


	arr[0] =0;
	for(int i=0;i<n;i++){
		if(i+1<n){
			arr[i+1] = min(arr[i]+abs(v[i+1]-v[i]),arr[i+1]);
		}
		if(i+2<n){
			arr[i+2] = min(arr[i]+abs(v[i+2]-v[i]),arr[i+2]);
		}
	}
	cout<<arr[n-1];
	



}

