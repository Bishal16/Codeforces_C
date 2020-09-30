for t in range(int(input())):
    n=int(input())
    
    p,q=0,0
    """
    for i in range(2,int(n)):
        if c==1:
            break
        elif n%i==0:
            for j in range(2,int(pow(n,1/2))+1):
                if j==i:
                    continue 
                if c==1:
                    break
                if n%(i*j)==0:
                    r=n/(i*j)
                    if r==1:
                        continue
                    if i!=j and r!=j and i!=r: 
                        if i*j*r==n:
                            #print (i," ",j," ",int(n/(i*j)))
                            p=i
                            q=j
                            r=int(n/(i*j))
                            c=1
                            break
    """
    for i in range(2,int(pow(n,1/2)+1)):
        if n%i==0:
            p=i
            n=n/i
            break
    for i in range(2,int(pow(n,1/2)+1)):
        if n%i==0 and p!=i:
            q=i
            n=n/i
            break
    #print(p,q,n)
    n=int(n)
    if p!=0 and q!=0 and n!=1 and n!=p and n!=q:
        print("YES")
        print (p,q,int(n))
        #print (p," ",q," ",r)
    else:
        print("NO")
        