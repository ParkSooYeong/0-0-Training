first = int(input())
second = int(input())
third = int(input())

if first == second == third == 60:
    print("Equilateral")
elif first + second + third == 180:
    if first == second or first == third or second == third:
        print("Isosceles")
    elif first != second != third:
        print("Scalene")
elif first + second + third != 180:
    print("Error")
