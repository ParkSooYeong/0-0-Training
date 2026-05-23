N = int(input())

next = N
count = 0

while True:
    a = next // 10
    b = next % 10
    c = (a + b) % 10

    next = b * 10 + c

    count += 1

    if next == N:
        break

print(count)

'''
N_list = [0] * 2
M_list = [0] * 2

count = 0

if N < 10:
    N_list[1] = N
else:
    N_list = list(map(int, str(N)))

print(N_list)

while True:

    if N_list[0] + N_list[1] < 10:
        M_list[1] = list(map(int, str(N_list[0] + N_list[1])))
    else:
        M_list = list(map(int, str(N_list[0] * 10 + N_list[1])))

    count += 1

    if count != 1 and M_list[0] * 10 + M_list[1] == N:
        print(count)
        break

    N_list[0] = N_list[1]
    N_list[1] = M_list[1]
'''