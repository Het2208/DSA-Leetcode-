class Solution(object):
    def sortedSquares(self, nums):
        for i in range(len(nums)):
            nums[i] **= 2
        nums.sort()
        return nums