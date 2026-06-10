class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        n = len(nums)
        curr_sum = 0

        for i in range(k):
            curr_sum += nums[i]
            ans = curr_sum/k

        for i in range(k, n):
            curr_sum += nums[i]
            curr_sum -= nums[i-k]
            ans = max(ans, curr_sum/k)

        return ans