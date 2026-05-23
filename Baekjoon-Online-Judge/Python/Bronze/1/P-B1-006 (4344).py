C = int(input())

for i in range(C):
    TC = list(map(int, input().split()))
    
    N = TC[0]
    grade = TC[1:]

    average = sum(grade) / N

    count = 0

    for j in grade:
        if j > average:
            count += 1

    rate = (count / N) * 100

    print("{:.3f}%".format(rate))
