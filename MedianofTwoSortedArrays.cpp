#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v3;
        v3.reserve(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(),
           nums2.begin(), nums2.end(),
           std::back_inserter(v3));
        int n = v3.size();
        if(n%2 == 0){
            return (double)(v3[n/2 -1] + v3[n/2])/2;
        }
        else{
            return (double)v3[n/2];
        }
    }
};