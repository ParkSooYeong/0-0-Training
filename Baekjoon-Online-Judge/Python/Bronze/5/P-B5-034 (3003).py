white = list(map(int, input().split()))

black = [1, 1, 2, 2, 2, 8]
piece = []

for i in range(len(white)):
    if white[i] != black[i]:
        piece.append(black[i] - white[i])
    else:
        piece.append(0)

print(*piece)
