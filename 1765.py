from math import ceil
 
 
def solve():
    n, a, b = map(int, input().split())
    if a > b:
        print(1)
    else:
        print(ceil(n / a))
 
 
# t = 1
t = int(input())
for _ in range(t):
    solve()
