def solution(myString, pat):
    answer = 0
    
    reverse = ""
    
    for i in range(len(myString)):
        if myString[i] == 'A':
            reverse += 'B'
        else:
            reverse += 'A'
    
    if pat in reverse:
        answer = 1
    
    return answer
