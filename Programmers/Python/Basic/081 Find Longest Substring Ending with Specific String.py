def solution(myString, pat):
    temp = myString.rfind(pat)
    
    answer = myString[:temp + len(pat)]
    
    return answer
