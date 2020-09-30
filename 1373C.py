for t in range(int(input())):
    s=input()
    l=len(s)
    
    c=0
    i=0
    ls=[]
    if s[0]=='+':
        ls.append(1)
        c=1
        i=1
    while(i<l):
        if s[i]=='-':
            c=c-1
            ls.append(c)
        else:
            if s[i-1]=='+':
                c=c+1
            elif ls[i-1]<0:
                c=1
            elif ls[i-1]>=0:
                c=c+1
            ls.append(c)
        i=i+1
    
    ans=0
    for i in range(l):
        if s[i]=='-' and ls[i]<0:
            ans=ans+i+1
    #print(ls)
    #print(s)
    print(ans+l)