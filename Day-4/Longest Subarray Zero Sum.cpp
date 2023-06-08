#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int prefix_sum=0, ans = 0;
		unordered_map<int, int> m;
		m.insert({prefix_sum, -1});
		int cnt=0;
		for(auto i:arr) {
			prefix_sum+=i;
			if(m.find(prefix_sum)!=m.end()){
				int firstOccurenceIndex = m[prefix_sum];
				ans = max(ans, cnt-(firstOccurenceIndex));
			} else {
				m.insert({prefix_sum, cnt});
			}	
			cnt++;
		}
    return ans;

}