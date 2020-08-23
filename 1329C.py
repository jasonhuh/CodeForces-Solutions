def solve():
    n = int(input())
    A = list(map(int, input().split()))[::-1]
    res = 0
    prev = A[0]
    for i in range(1, len(A)):
        cur = A[i]
        if prev < cur:
            res += cur - prev
        prev = cur

    return res

tc = int(input())
res = []
for _ in range(tc):
    res.append(solve())

for num in res:
    print(num)
