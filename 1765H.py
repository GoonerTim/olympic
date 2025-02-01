import heapq
 
def solve():
    n, m = map(int, input().split())
    p = list(map(int, input().split()))
    g = [[] for _ in range(n)]
    b = [0] * n
    for _ in range(m):
        i, j = map(int, input().split())
        g[j - 1].append(i - 1)
        b[i - 1] += 1
    c = b[:]
    r = []
    for x in range(n):
        b = c[:]
        q, o = [], []
        for i in range(n):
            if b[i] == 0:
                heapq.heappush(q, (-p[i], i))
        for i in range(n):
            while len(q) != 0 and q[0][0] <= -(n - i):
                j, k = heapq.heappop(q)
                if k != x:
                    o.append(k)
            if len(o) == 0:
                r.append(n - i)
                break
            else:
                j = o.pop()
                for k in g[j]:
                    b[k] -= 1
                    if b[k] == 0:
                        heapq.heappush(q, (-p[k], k))
    print(*r)
 
t = 1
# t = int(input())
for _ in range(t):
    solve()
