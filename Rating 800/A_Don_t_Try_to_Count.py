def output(s, x):
    if s in x:
        return 0

    x += x
    if s in x:
        return 1

    x += x
    if s in x:
        return 2
    
    x += x
    if s in x:
        return 3

    x += x
    if s in x:
        return 4

    x += x    
    if s in x:
        return 5

    return -1

t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    x = input()
    s = input()

    print(output(s, x))
    
    
