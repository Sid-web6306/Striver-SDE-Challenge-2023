#include <bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	int count =0; // 1 2 3 4
	// 1 2 2 3 3 3 4 4 5 5
	//                   i
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			count++;
		}
	}
	return count+1;
}