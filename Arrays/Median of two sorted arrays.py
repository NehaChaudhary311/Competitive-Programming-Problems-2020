'''
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

'''


class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums3 = nums1 + nums2
        nums3.sort()
        if len(nums3)%2 == 0:
            mid = (int)(len(nums3)/2)
            x = mid -1
            avg = (nums3[mid] + nums3[x])/2
            return avg
        else:
            mid = (int)(len(nums3)/2)
            return nums3[mid]
