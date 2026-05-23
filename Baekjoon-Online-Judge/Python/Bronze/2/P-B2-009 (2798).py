N, M = map(int, input().split())
Card = list(map(int, input().split()))
sum = 0

for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if Card[i] + Card[j] + Card[k] > M:
                continue
            else:
                sum = max(sum, Card[i] + Card[j] + Card[k])

print(sum)
