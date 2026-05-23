def solution(num_list):
    answer = 0
    
    count = 0
    
    for i in range(len(num_list)):
        temp = num_list[i]
        
        while True:
            if temp == 1:
                break
            elif temp % 2 == 0:
                temp = temp / 2
                count += 1
            elif temp % 2 == 1:
                temp = (temp - 1) / 2
                count += 1
        
    answer = count
    
    return answer
