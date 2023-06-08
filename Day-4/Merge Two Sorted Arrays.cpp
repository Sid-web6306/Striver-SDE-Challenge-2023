#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=0, j=0;
	for(int i=arr1.size()-arr2.size();i<arr1.size();i++){
		arr1[i] =arr2[j];
		j++;
	}
	sort(arr1.begin(), arr1.end());
	return arr1;
}