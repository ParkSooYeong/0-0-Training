string = input().strip().upper()
alphabet = list(set(string))
counts = []

for i in alphabet:
    counts.append(string.count(i))

if counts.count(max(counts)) > 1:
    print('?')
else:
    print(alphabet[counts.index(max(counts))])

'''
string = list(input().strip())

BA = [0] * 26
SA = [0] * 26

for i in range(65, 91):
    for j in range(len(string)):
        if chr(i) == string[j]:
            BA[i - 65] += 1
        else:
            continue

for i in range(97, 123):
    for j in range(len(string)):
        if chr(i) == string[j]:
            SA[i - 97] += 1
        else:
            continue

A = [BA[i] + SA[i] for i in range(len(BA))]

if max(A) == 1 or max(BA) == 0 or max(SA) ==0:
    print(chr(A.index(max(A)) + 65))
elif len(set(BA)) != len(set(SA)):
    print('?')
else:
    print(chr(A.index(max(A)) + 65))
'''