N, M = map(int, input().split())

B = []

for k in range(N):
    B.append(k + 1)

for k in range(M):
    i, j = map(int, input().split())
    B = B[0:i-1] + list(reversed(B[i-1:j])) + B[j:N]

for k in B:
    print(k, end=" ")
