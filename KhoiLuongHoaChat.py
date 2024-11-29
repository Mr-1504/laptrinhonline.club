w = {'C': 12, 'H': 1, 'O': 16}
for i in range(int(input())):
    q = []
    j = 0
    s = input()
    while j < len(s):
        if s[j] == '(':
            q.append('(')
            j += 1
        elif s[j] == ')':
            tmp = 0
            while q and q[-1] != '(':
                tmp += q.pop()
            q.pop()
            j += 1
            c = 0
            if j < len(s) and s[j].isdigit():
                c = int(s[j])
                j += 1
            q.append(tmp * (c if c else 1))
        elif s[j].isalpha():
            e = s[j]
            j += 1
            count = 0
            if j < len(s) and s[j].isdigit():
                count = int(s[j])
                j += 1
            q.append(w[e] * (count if count else 1))
    print(sum(q))
