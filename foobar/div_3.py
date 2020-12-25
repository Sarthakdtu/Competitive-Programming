
def solution(arr):
    arr.sort()
    rem = list()
    s = 0
    for i in range(len(arr)):
        rem.append(arr[i] % 3)
        s += arr[i]
    res = s % 3
    flag = True
    idx = -1
    num = ""
    for i in range(len(arr)):
        if res !=0 and rem[i] == res:
            idx = i
            break
    if res==0 or idx != -1:
        for i in range(len(arr)-1, -1, -1):
            if i != idx:
                num += str(arr[i])
    else:
        idx2 = -1
        for i in range(len(arr)):
            if 3 - res == rem[i]:
                if flag:
                    idx = i
                    flag = False
                else:
                    idx2 = i
                    break
        for i in range(len(arr)-1, -1, -1):
            if i!=idx and i!=idx2:
                num += str(arr[i]) 
    if num == "":
        num = "0"
    return num

print(solution([3 ]))






    


