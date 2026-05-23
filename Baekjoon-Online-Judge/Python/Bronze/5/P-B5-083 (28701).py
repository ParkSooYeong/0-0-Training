N = int(input())

sum = 0
cube = 0

for i in range(N + 1):
    sum += i
    cube += i * i * i

print(sum)
print(sum * sum)
print(cube)
