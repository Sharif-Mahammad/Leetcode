class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        n = len(matrix)
        m = len(matrix[0])

        rs, re = 0, n-1
        cs, ce = 0, m-1
        ans = []

        while len(ans)<n*m:
            # l to r
            for i in range(cs, ce+1):
                ans.append(matrix[rs][i])
            rs+=1

            if len(ans) == n*m:
                break

            # top to down
            for i in range(rs, re+1):
                ans.append(matrix[i][ce])
            ce-=1

            if len(ans) == n*m:
                break

            # right to left
            for i in range(ce, cs-1, -1):
                ans.append(matrix[re][i])
            re-=1

            if len(ans) == n*m:
                break

            for i in range(re, rs-1, -1):
                ans.append(matrix[i][cs])
            cs+=1

        return ans