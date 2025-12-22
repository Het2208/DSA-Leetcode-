class Solution:
    def twoSum(self, nums, target):
        hash_map = {}

        for i, num in enumerate(nums):
            need = target - num
            if need in hash_map:
                return [hash_map[need], i]
            hash_map[num] = i
