t = int(input())

for _ in range(t):
    n = int(input())
    num = list(map(int, input().split()))

    if num[0] == 1:
        print("YES")
    else:
        print("NO")
        