for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	
	# if len(a) == 1:
	# 	print(0)
	# 	continue
	
	bestX, bestC = a[0], 1
	d = {}
	for x in a:
			if x not in d:
					d[x] = 1
			else:
					d[x] += 1
			
			if d[x] >= bestC:
					bestX, bestC = x, d[x]
	
	k = bestC
	
	ans = n-k
	val = n-k
	
	while val > 0:
			ans += 1
			val -= k
			k *= 2
			
	print(ans)
			