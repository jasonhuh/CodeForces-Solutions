from math import factorial

n = int(input())
res = 1
prev = 1
cycles = 0
for i in range(2, n):
    fact = prev * i % 1_000_000_007
    prev = fact
    cycles += fact

if n < 3:
    print(0)
else:
    print((n * prev - cycles) % 1_000_000_007)
