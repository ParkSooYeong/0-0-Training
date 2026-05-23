N = int(input())
grade = list(map(int, input().split()))

M = max(grade)

average = []
sum = 0

for i in range(N):
    average.append(grade[i] / M * 100)
    sum += average[i]

print(sum / N)
