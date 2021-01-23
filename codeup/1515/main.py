N = 25
ans = [ [ 0 ] * (N + 2) for _ in range(N + 2) ]
Map = [ [ 0 ] * (N + 2) for _ in range(N + 2) ]

for i in range(1, N + 1):
    line = list(map(int,input().split()))
    for j in range(1, N + 1):
        Map[i][j] = line[j - 1]

dy = (-1,1,0,0,-1,-1,1,1)
dx = (0,0,-1,1,-1,1,-1,1)

for i in range(1, N + 1):
    for j in range(1, N + 1):
        cnt = 0 # 주변 생명 
        for k in range(8):
            nexty = i + dy[k]
            nextx = j + dx[k]
            if Map[nexty][nextx] == 1:
                cnt += 1
        
        if Map[i][j] == 0 and cnt == 3:
            ans[i][j] = 1
        elif Map[i][j] == 1 and 2 <= cnt <= 3:
            ans[i][j] = 1

for i in range(1, N + 1):
    for j in range(1, N + 1):
        print(ans[i][j], end=' ')
    print()
