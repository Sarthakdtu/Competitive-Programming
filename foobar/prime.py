size = 105000
arr = list()
prime = ""
def sieve():
    pstr = ""
    for i in range(0, size):
        arr.append(True)
    arr[0] = False
    arr[1] = False
    for i in range(2, size):
        if arr[i]:
            pstr += str(i)
            for j in range(i*2, size, i):
                arr[j] = False
    return pstr

def solution(n):
    sol = prime[n:n+5]
    print(sol)
    return sol

prime = sieve()
