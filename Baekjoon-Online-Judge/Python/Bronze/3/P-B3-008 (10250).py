T = int(input())

for i in range(T):
    H, W, N = map(int, input().split())

    ACM = []

    for j in range(W):
        for k in range(H):
            ACM.append((k + 1) * 100 + (j + 1))

    print(ACM[N - 1])
