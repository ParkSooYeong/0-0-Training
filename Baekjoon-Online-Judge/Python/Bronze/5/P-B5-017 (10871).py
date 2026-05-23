N, X = map(int, input().split())
A = [*map(int, input().split())]
result = []

for i in A:
    if i < X:
        result.append(i)

print(" ".join(map(str, result)))
