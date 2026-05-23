first = int(input())
second = []

for i in str(input()):
    second.append(i)

third = first * int(second[-1])
fourth = first * int(second[-2])
fifth = first * int(second[-3])
sixth = fifth * 100 + fourth * 10 + third

print(third)
print(fourth)
print(fifth)
print(sixth)
