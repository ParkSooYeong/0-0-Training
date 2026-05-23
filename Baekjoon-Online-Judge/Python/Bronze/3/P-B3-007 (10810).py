N, M = map(int, input().split())

'''
B = list(map(int, (0 for l in range(N))))

count = 0

for l in range(M):
    i, j, k = 0, 0, 0
    i, j, k = map(int, input().split())

    count += 1

    for o in range(i-1, j):
        del B[o]
        B.insert(o, k)

    if count == 1:
        del B[0]
        B.insert(0, 0)

    if i == j:
        del B[i-1]
        B.insert(i-1, k)

for l in B:
    print(l, end=' ')
'''

B = []

for l in range(N):
    B.append(0)

for l in range(M):
    i, j, k = map(int, input().split())

    for o in range(i, j+1):
        B[o-1] = k

print(*B)
