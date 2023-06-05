#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    vector<int> maj;
    int freq = floor(arr.size()/3);
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto i: m){
		if(i.second>freq){
			maj.push_back(i.first);
		}
	}
	return maj;

}