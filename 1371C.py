for t in range(int(input().split())):
    v,c,n,m = map(int, input().split())
    if v+c < n+m:
        print("No")
    else:
        # taking qst grp 1st
        if c<v:
            v=v-
            