import collections
import queue

q = queue.PriorityQueue()
d = collections.Counter(input())

for i in d.values():
    q.put(i)

sum = 0

while q.qsize() > 1:
    x, y = q.get(), q.get()
    sum += x + y
    q.put(x + y)

print(sum)
