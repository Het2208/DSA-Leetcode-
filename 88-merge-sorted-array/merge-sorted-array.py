class Solution(object):
    def merge(self, nums1, m, nums2, n):
        last = m+n-1
        m -= 1
        n -= 1
        while m>=0 and n>=0:
            if nums1[m] > nums2[n]:
                nums1[last] = nums1[m]
                m -= 1
            else:
                nums1[last] = nums2[n]
                n -= 1
            last-=1

        while n >= 0:
            nums1[last] = nums2[n]
            n -= 1
            last -= 1
        
        return nums1