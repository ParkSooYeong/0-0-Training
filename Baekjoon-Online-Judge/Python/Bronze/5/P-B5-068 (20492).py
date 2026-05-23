N = int(input())

print(N - N * 22 // 100, end = ' ')
print(N - (N - N * 80 // 100) * 22 // 100)
