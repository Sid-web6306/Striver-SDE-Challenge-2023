#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++) {
          if (m.find(arr[i]) != m.end()) {
			  return arr[i];
          }
		  m[arr[i]] = 1;
    }
	return -1;
}
