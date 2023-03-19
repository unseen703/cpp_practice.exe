
t = input()

for w in range(0,int(t)):
    s = input()
    s2 = input()
    n = len(s)
    m = len(s2)
    flg = False
    for i in range(0,n):
           for j in range(0,n-i):
                 k = m - 1 - j
                 if i + j < k :
                    continue
                 st = i
                 r = i+j
                 end = r - k
                 if s[st:r+1] + s[end : r][::-1] == s2 :
                       flg = True
    print("YES" if flg else "no")
