A, B = map(int, input().split())
C = int(input())

if B + C >= 60:
    A += (B + C) // 60

    if A >= 24:
        A -= 24

    B += C

    if B % 60 == 0:
        B = 0
    else:
        B %= 60

else:
    B += C

print(A, B)
