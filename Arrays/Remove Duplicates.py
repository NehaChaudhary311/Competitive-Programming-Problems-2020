class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i,j = 0,1
        while j < len(nums): 
            if nums[j] == nums[i]: 
                j += 1
            else:
                nums[i+1] = nums[j]
                i += 1
        return len(nums[:i+1])
