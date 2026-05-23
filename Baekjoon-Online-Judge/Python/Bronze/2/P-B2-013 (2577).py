A = int(input())
B = int(input())
C = int(input())

num = [0] * 10
multi = list(map(int, str(A * B * C)))

for i in range(len(num)):
    for j in range(len(multi)):
        if multi[j] == i:
            num[i] += 1

for i in range(len(num)):
    print(num[i])
