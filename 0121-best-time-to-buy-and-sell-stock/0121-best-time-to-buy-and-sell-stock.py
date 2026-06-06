class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        mn, mx = prices[0], 0
        ans = 0
        for i in range(n-1):
            mn = min(mn, prices[i])
            ans = prices[i+1] - mn
            mx = max(mx, ans)

        return mx
