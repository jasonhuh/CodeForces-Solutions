class Solution:
    def solve(self, m, n, grid):
        cnt = 0

        for i in range(m):
            if grid[i][-1] == 'R':
                cnt += 1
        
        for i in range(n):
            if grid[-1][i] == 'D':
                cnt += 1

        return cnt

tc = int(input())
for _ in range(tc):
    m, n = map(int, input().split())
    grid = []
    for _ in range(m):
        row = list(input().strip())
        grid.append(row)
    print(Solution().solve(m, n, grid))

