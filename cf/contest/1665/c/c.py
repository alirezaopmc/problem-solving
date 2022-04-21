for _ in range(int(input())):
	n = int(input())
	d = [ 0 ] * n

	a = list(map(int, input().split()))

	for i in range(n-1):
		x = a[i]
		d[x-1] += 1

	m = 0

	for i in range(n):
		if d[i] != 0:
			m += 1

	more = n-1 - m * (m+1) // 2

	print(1 + m + more)