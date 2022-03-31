d = [ None for i in range(1000) ]

d[0] = '1'
d[1] = '2'
d[2] = '21'

def f(n):
  n-=1
  if d[n] == None:
    p = f(n)

    if p[-1] == '2':
      d[n] = p + '1'
    elif p[0] == '2':
      d[n] = '1' + p
    else:
      d[n] = p[1:] + '2'

  
  return d[n]

for _ in range(int(input())):
  n = int(input())

  print(f(n))