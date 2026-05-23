T = int(input())
U = []

for i in range(T):
    R, S = input().split()
    R = int(R)
    U = ''

    for j in S:
        U += j * R

    print(U)
