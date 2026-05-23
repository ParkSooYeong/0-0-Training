TestCase = int(input())

for i in range(TestCase):
    OX = input()
    
    score = 0
    combo = 0

    for j in OX:
        if j == 'O':
            combo += 1
            score += combo
        else:
            combo = 0
    
    print(score)

'''
Point = 0

for i in range(TestCase):
    OX = list(input())

    for j in range(len(OX)):
        if OX[j] == 'O' and OX[j] == OX[j + 1]:
            Point += 1
        else:
            Point = 0

    print(Point)
'''