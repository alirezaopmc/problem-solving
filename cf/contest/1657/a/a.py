from math import sqrt

dp = {
	(0,0): 0
}

def gen(n, m):
	a = m ** 2 - n ** 2
	b = 2 * m * n
	c = m ** 2 + n ** 2

	return a, b, c

ps = []

for n in range(1, 8):
	for m in range(n+1, 8):
		a, b, c = gen(n, m)
		if a <= 50 >= b:
			ps.append((a, b))
			dp[(a, b)] = 1

inf = 10**10
def bt(x, y, c):
	if (x, y) in dp:
		return dp[(x,y)]+c

	if c >= 100:
		return inf

	ans = inf

	for p in ps:
		ans = min(ans, bt(x-p[0], y-p[1], c+1))
		ans = min(ans, bt(x+p[0], y-p[1], c+1))
		ans = min(ans, bt(x-p[0], y+p[1], c+1))
		ans = min(ans, bt(x+p[0], y+p[1], c+1))

	dp[(x,y)] = ans	
	return ans


# for _ in range(int(input())):
# 	x, y = map(int, input().split())

# 	print(bt(x, y, 0))

for i in range(0, 51):
	for j in range(0, 51):
		print(bt(i,j, 0))