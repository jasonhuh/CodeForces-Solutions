import collections

n = int(input())
s = list(map(int, input().split()))
count = collections.Counter(s)

def solve(count):
    a, b, c = None, None, None
    for key in sorted(count.keys(), reverse=True):
        val = count[key]
        if val >= 8:
            return "YES"
        elif val >= 6:
            if not a:
                a, b = key, key
            else:
                return "YES"
        elif val >= 4:
            if not a:
                a = key
            else:
                return "YES"
        elif val >= 2:
            if not b:
                b = key
            else:
                return "YES"
    
    return 'NO'

m = int(input())
res = []
for _ in range(m):
    tmp = input().split()
    if tmp[0] == "+":
        count[int(tmp[1])] += 1
    elif tmp[0] == "-":
        count[int(tmp[1])] -= 1

    res.append(solve(count))

for s in res:
    print(s)