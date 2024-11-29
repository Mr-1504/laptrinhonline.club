from collections import deque

n, k = map(int, input().split())
h = list(map(int, input().split()))
if n * k == 0:
    print(" ".join(map(str, [])))
    exit()
if k == 1:
    print(" ".join(map(str, h)))
    exit()
d = deque()
max = []

for i in range(n):
    if d and d[0] == i - k:
        d.popleft()

    while d and h[d[-1]] < h[i]:
        d.pop()

    d.append(i)

    if i >= k - 1:
        max.append(h[d[0]])

print(" ".join(map(str, max)))
