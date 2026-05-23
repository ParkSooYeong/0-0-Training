S = list(input())
alphabet = [-1 for i in range(26)]

for i in range(97, 123):
    for j in range(len(S)):
        if chr(i) == S[j]:
            if alphabet[i - 97] == -1:
                alphabet[i - 97] = j
            else:
                continue

print(*alphabet)
