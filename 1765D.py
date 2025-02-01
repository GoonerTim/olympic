def ch(x, c, m):
    s, e = 0, x
    d = []
    for i in range(0, x + 1):
        if i % 2 == 0:
            d.append(c[e])
            e -= 1
        else:
            d.append(c[s])
            s += 1
    for i in range(1, len(d)):
        if d[i] + d[i - 1] > m:
            return False
    return True
 
def solve():
    n, m = list(map(int, input().split()))
    c = list(map(int, input().split()))
    ans = n + sum(c)
    c.sort()
    l, r = 0, n - 1
    while r - l > 1:
        mi = (r + l) // 2
        if ch(mi, c, m):
            l = mi
        else:
            r = mi
    if ch(r, c, m):
        ans -= r
    else:
        ans -= l
    print(ans)
 
 
t = 1
# t = int(input())
for _ in range(t):
    solve()
