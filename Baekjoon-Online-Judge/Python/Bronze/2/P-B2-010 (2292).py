N = int(input())

room = 1
count = 1

for i in range(1, N, count):

    if count >= N:
        break

    count += i * 6
    room += 1

print(room)
