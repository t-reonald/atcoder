n, p, q, r,s = map(int, input().split())
a = list(map(int, input().split()))

for i in range(p,q+1):
    a[i-1],a[r-p+i-1] = a[r-p+i-1],a[i-1]

print(*a)
    