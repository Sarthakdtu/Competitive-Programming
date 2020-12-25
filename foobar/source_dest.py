from collections import deque

def is_safe(i, j):
    if i>-1 and j>-1 and i<8 and j<8:
        return True
    return False

def solution(s, d):
    q = deque()
    sr = int(s/8)
    sc = s%8
    dr = int(d/8)
    dc = d%8
    im = [2, 2, -2, -2, 1, -1, 1, -1]
    jm = [1, -1, 1, -1, 2, 2, -2, -2]
    visited = list()
    for i in range(8):
        vis = [False] * 8
        visited.append(vis)
    q.append([sr, sc, 0])
    visited[sr][sc] = True 
    while q:
        i = q[0][0]
        j = q[0][1]
        steps = q[0][2]
        q.popleft()
        if i==dr and j==dc:
            return steps
        for a in range(len(im)):
            ci = i + im[a]
            cj = j + jm[a]
            if is_safe(ci, cj) and (not visited[ci][cj]):
                visited[ci][cj] = True
                if ci==dr and cj==dc:
                    return steps+1
                q.append([ci, cj, steps+1])

print(solution(31, 16))
        



        


