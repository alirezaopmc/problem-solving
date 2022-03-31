for _ in range(int(input())):
  n, m = map(int, input().split())
  a = [ input() for row in range(n) ]

  def ind(i, j):
    return (i - 1) * m + j

  def cnt(i, j):
    return [
      a[i][j],
      a[i][j+1],
      a[i+1][j],
      a[i+1][j+1]
    ].count('1')

  flag = False
  for i in range(n-1):
    if flag: break
    for j in range(m-1):
      if cnt(i, j) == 3:
        flag = True
        break
  
  print('NO' if flag else 'YES')

