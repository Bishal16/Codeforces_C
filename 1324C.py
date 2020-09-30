for i in range(int(input())):
    s=input()
    c=0
    mx=0
    for j in range(len(s)):
        if s[j]=='L':
            c=c+1
        else:
            c=0
        if c>mx:
            mx=c
    print(mx+1);