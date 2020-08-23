def solve(s):
    res = turn = 0
    while len(s):
        max_ones = cnt = 0
        for i, c in enumerate(s):
            if c == '0':
                max_ones = max(max_ones, cnt)
                cnt = 0
            else:
                cnt += 1
        max_ones = max(max_ones, cnt)

        s = s.replace('1'*max_ones, '', 1)
        
        if turn == 0:
            res += max_ones
        turn ^= 1
        if max_ones == 0:
            break

    return res

T = int(input())
res = []
for _ in range(T):
    s = input()
    ans = solve(s)
    res.append(str(ans))

print('\n'.join(res))    