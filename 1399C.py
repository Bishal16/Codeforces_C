for t in range(int(input())):
    n=int(input())
    ls=[]
    ls=list(map(int,input().split()))
    mx=max(ls)
    s=0
    for i in range(2,mx*2+1):
        c=0
        used=[]
        for j in range(n):
            if ls[j]<i:                
                for k in range(n):                    
                    if j!=k and ls[j]+ls[k]==i and j not in used and k not in used:
                        c=c+1
                        used.append(j)
                        used.append(k)
                        if c>s:
                            s=c
                        break
    #print(i,used)    
    print(int(s))
        
