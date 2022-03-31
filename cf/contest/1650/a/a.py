for _ in range(int(input())):
  s = input()
  c = input()

  flag = False
  for i in range(len(s)):
    if s[i] == c and i % 2 == 0 and (len(s)-i-1) % 2 == 0:
      flag = True
      break

  print("YES" if flag else "NO")