/*

Given two arrays, write a function to compute their intersection.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

*/

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        for i in range(len(nums1)):
            if nums1[i] in nums2:
                if nums1[i] not in ans:
                    ans.append(nums1[i])
        for i in range(len(nums2)):
            if nums2[i] in nums1:
                if nums2[i] not in ans:
                    ans.append(nums2[i])
        return ans
                
            
        
