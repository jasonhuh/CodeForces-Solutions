def solve(n, s):
    cnt = 0
    A = [0] + [int(c) for c in s]
    for i in range(1, len(A)):
        A[i] += A[i - 1]
    
    for i in range(1, len(A)):
        for j in range(i):
            if A[i] - A[j] == i - j:
                cnt += 1

    return cnt

t = int(input())
res = []
for _ in range(t):
    n = int(input())
    s = input()
    ans = solve(n, s)
    res.append(str(ans))

print('\n'.join(res))