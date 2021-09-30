T = int(input())

for n in range(T):
    s = input()
    l = len(s)
    count = 0
    ans = 0
    for i in range(l):
        if i + 3 < l:
            if s[i] == 'K' and s[i + 1] == 'I' and s[i + 2] == 'C' and s[i + 3] == 'K':
                count += 1
        if i + 4 < l:
            if s[i] == 'S' and s[i + 1] == 'T' and s[i + 2] == 'A' and s[i + 3] == 'R' and s[i + 4] == 'T':
                ans += count
    print ("Case #{}: {}".format(n + 1, ans))
