A = []
B = []

for i in range(10):
    A.append(int(input()))
    B.append(A[i] % 42)

C = len(set(B))

print(C)
