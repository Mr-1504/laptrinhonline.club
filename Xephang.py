res = 0
stack = []

n = int(input())
heights = list(map(int, input().split()))

for height in heights:
    while stack and stack[-1][0] < height:
        res += stack.pop()[1]
    
    if stack and stack[-1][0] == height:
        res += stack[-1][1] + (len(stack) > 1)
        stack[-1][1] += 1
    else:
        res += len(stack) > 0
        stack.append([height, 1])

print(res)
