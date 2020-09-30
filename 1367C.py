for t in range(int(input())):
    n,k=map(int,input().split())
    
    st=str(input())
    one,c,s=0,0,0
    
    i=0
    while i<n:
        if i==0 and n>k :
            for j in range(k+1):
                if st[j]=='0'  :
                    c=c+1
                else:
                    c=0
                    break
            if c==k+1:
                s=1
                i=1
                c=0
                
        if st[i]=='0':
            c=c+1
            if c==2*k+1:
                s=s+1
                c=k
                #print("here2",s)
        else:
            c=0
            one=one+1
        i=i+1
    #print(c)
    #
    
    if c<2*k+1 and c>k and c<n:
        s=s+1
        
    if s==0 and one ==0:
        print(1)
    else:    
        print(s)
        
    