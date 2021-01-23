import sys

input = sys.stdin.readlines
a = sorted(list(map(int, [ i.strip() for i in input() ])))

n = len(a)
total = sum(a)
for i in range(n):
    for j in range(i+1, n):
        if total - a[i] - a[j] == 100:
            for k in range(n):
                if k == i or k == j:
                    continue
                print(a[k])
            exit(0)

