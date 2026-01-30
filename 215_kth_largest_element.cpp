#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
	int largestElement(vector<int>& nums, int k){
		sort(nums.begin(), nums.end(), greater<int>());
		
		return nums[k-1];
	}
	
};

int main()
{
	Solution s;
	vector<int> v = {3,2,1,5,6,4};
	int k = 2;
	
	cout << s.largestElement(v,k) << endl;
	
	return 0;
}
