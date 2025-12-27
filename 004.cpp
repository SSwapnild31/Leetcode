class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> n;
        int i=0,j=0;
        
        while(i<nums1.size() || j<nums2.size())
        {
            if(i<nums1.size())
                n.push_back(nums1[i++]);

            if(j<nums2.size())
                n.push_back(nums2[j++]);
        }

        sort(n.begin(),n.end());
        
        int size = n.size();

        if(size%2==0)
            return (n.at(size/2-1)+n.at(size/2))/2.0 ;
        else
            return n.at(size/2); 
    }
};
