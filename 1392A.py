tc = int(input())
for _ in range(tc):
    n = int(input())
    A = list(map(int, input().split()))
    if len(set(A)) == 1:
        print(len(A))
    else:
        print(1)