n = int(input().strip())
res = 1
val = 1
for i in range(2, n + 1):
    if not n % i:
        j = sum(map(int, str(i)))
        if j > val:
            val = j
            res = i
print(res)
