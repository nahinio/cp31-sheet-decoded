t = int(input())
 
for _ in range(t):
    n, a, b = map(int, input().split())
 
    if a == n and b == n:
        print("Yes")
    elif a + b <= n - 2:
        print("Yes")
    else:
        print("No")