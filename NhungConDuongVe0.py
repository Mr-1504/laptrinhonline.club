n = int(input())
a = set()
a.add(n)
def dfs(x):
    global a
    for i in range(1, x + 1):
        if x % i == 0:
            j = x // i
            if i > j:
                break
            m = (i - 1) * (j + 1)
            if m not in a:
                a.add(m)
                if i != 1:
                    dfs(m)

dfs(n)
a = sorted(a)
print(*a)