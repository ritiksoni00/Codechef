(n, k) = map(int, raw_input().split(' '))

ans = 0

for i in range(n):
	x = int(raw_input())
	if x % k == 0:
		ans += 1

print(ans)	
