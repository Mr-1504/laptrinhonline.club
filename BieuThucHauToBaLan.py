import queue

ut = {'(': 0, '+': 1, '-': 1, '*': 2, '/': 2, '%': 2}
res = ''

q = queue.LifoQueue()
s = input()
for c in s:
    if c == '(':
        q.put(c)
    elif c == ')':
        while q.queue[-1] != '(': res += q.get()
        q.get()
    elif c.isdigit():
        res += c
    else:
        while q.qsize() > 0 and ut[q.queue[-1]] >= ut[c]: res += q.get()
        q.put(c)

while q.qsize() > 0: res += q.get()

print(res)
sum = s.replace('/', '//')
print(eval(sum))
