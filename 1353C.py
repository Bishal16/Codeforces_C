for i in range(0,int(input())):
    n,k=map(int,input().split())
    x=k/(n-1)
    x=int(x)
    p=x*n
    p=p+(k-x*(n-1))
    if p%n==0:
        print(p-1)
    else:
        print(p)



