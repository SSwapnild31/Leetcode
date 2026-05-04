#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
	int largestElement(vector<int>& nums, int k){
		//35ms
		//sort(nums.begin(), nums.end(), greater<int>());
		//return nums[k-1];

		//43ms
		priority_queue<int, vector<int>, greater<int>> pq;
        int n = nums.size();

        for(int i=0; i<n; i++){
            
            pq.push(nums[i]);

            if(pq.size() > k){
                pq.pop();
            }
        } 
        return pq.top();
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
