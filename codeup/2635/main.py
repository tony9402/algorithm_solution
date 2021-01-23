n = int(input())

Sum = 0
idx   = 1
while idx * idx <= n:
    if n % idx == 0:
        Sum += idx
        if idx * idx != n:
            Sum += n // idx
    idx += 1

print(Sum)
