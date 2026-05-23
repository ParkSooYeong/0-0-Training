n1 = []
n2 = []

for i in range(1, 31):
    n1.append(i)

for i in range(28):
    n2.append(int(input()))

n2.sort()

for i in n1:
    if i not in n2:
        print(i)
