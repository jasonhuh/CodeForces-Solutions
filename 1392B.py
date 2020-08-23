def solve():
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    
    d = max(A)
    for i in range(len(A)):
        A[i] = d - A[i]
    k -= 1

    k %= 2

    for i in range(k):
        d = max(A)
        for j in range(len(A)):
            A[j] = d - A[j]

    return ' '.join(str(num) for num in A)


tc = int(input())
for _ in range(tc):
    print(solve())
