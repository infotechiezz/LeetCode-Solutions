class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back(nums1[i]);
        } 
        for(int i=0;i<m;i++){
            arr.push_back(nums2[i]);
        }

        sort(arr.begin(),arr.end());
        int total = arr.size();
        if(total%2==1){
            return arr[total/2];
        }else{
            int mid1=arr[(total/2)-1];
            int mid2=arr[total/2];
            return (mid1+mid2)/2.0;
        }
    }
};
