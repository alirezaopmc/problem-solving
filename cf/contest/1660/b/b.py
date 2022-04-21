for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	a.sort()

	if len(a) == 1:
		print('YES' if a[0] == 1 else 'NO')
	else:
		if a[-1] - a[-2] > 1:
			print('NO')
		else:
			print('YES')