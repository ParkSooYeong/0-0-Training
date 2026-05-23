word = input()

time = 0
one = 2

for i in word:
    if i in 'ABC':
        time += one + 1
    elif i in 'DEF':
        time += one + 2
    elif i in 'GHI':
        time += one + 3
    elif i in 'JKL':
        time += one + 4
    elif i in 'MNO':
        time += one + 5
    elif i in 'PQRS':
        time += one + 6
    elif i in 'TUV':
        time += one + 7
    elif i in 'WXYZ':
        time += one + 8

print(time)
