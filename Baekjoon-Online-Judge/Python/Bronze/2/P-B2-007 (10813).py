N, M = map(int, input().split())

B = []

for k in range(N):
    B.append(k + 1)

for k in range(M):
    i, j = map(int, input().split())
    temp = B[i-1]
    B[i-1] = B[j-1]
    B[j-1] = temp

for k in B:
    print(k, end=" ")
