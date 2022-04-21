DEBUG = False

for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	b = [ -1 for i in range(n) ]
	

	if len(a) == 1:
		if DEBUG: print(0, 0)
		if a[0] > 0:
			print(0, 0)
		else:
			print(1, 0)
		continue

	def solve(i, j):
		if DEBUG: print(a[i:j+1], i,j)
		if i > j:
			return (-1, 0, 0)
		elif i == j:
			if a[i] > 0:
				return (a[i], 0, 0)
			else:
				return (-1, 0, 0)
		
		b[i] = a[i]
		for k in range(i+1, j+1):
			b[k] = b[k-1] * a[k]
		
		if DEBUG: print('b:', b[i:j+1])

		f = l = -1
		for k in range(i, j+1):
			if a[k] < 0:
				if f == -1:
					f = k
				l = k

		if DEBUG: print('f', f)
		if DEBUG: print('l', l)

		if b[j] > 0:
			return (b[j], i, j)
		elif l == 0:
			v = b[j] // a[i]
			return (v, i+1, j)
		else:
			v1 = b[j] // b[f]
			v2 = b[j] // b[l]

			if v1 > v2:
				return (v1, f+1, j)
			else:
				return (v2, i, l-1)

		

	def best(x, y):
		return x if x[0] > y[0] else y

	ans = (-1, 0, 0)
	i = j = 0
	for k in range(n):
		if a[k] == 0:
			j = k-1
			s = solve(i, j)
			if DEBUG: print(s)
			ans = best(s, ans)
			i = k+1
		elif k == n-1:
			j = k
			s = solve(i, j)
			if DEBUG: print(s)
			ans = best(s, ans)
	if DEBUG: print(ans)
	if ans[0] < 0:
		print(n, 0)
		# print('ans', ans)
	else:
		print(ans[1], n-1-ans[2])
		# print('ans', ans)
			