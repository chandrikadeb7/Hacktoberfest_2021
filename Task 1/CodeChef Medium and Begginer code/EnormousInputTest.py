n, k = map(int, input().split());no = [];cnt = 0
for j in range(n):no.append(int(input()))
for i in no:
    if (i % k == 0):cnt += 1
print(cnt)
