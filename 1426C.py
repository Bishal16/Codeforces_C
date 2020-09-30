for t in range(int(input())):
    n = int(input())
    if n==1:
        print(0)
        continue
    import  math
    x=pow(n,1/2)
    if x%1==0:
        print(int(x+x-2))
    else:
        x=int(x)
        y=x+1
        if x*y>=n:
            print(int(x+y)-2)
        else:
            x+=1
            print(int(x+y)-2)
'''        
    diff=10000000000
    import math
    for i in range(2,int(sqrt(n))):
        if n%i == 0:
            d=n//i
        else:
            d=n//i + 1
            
        if d==i:
            print(d)
            break
        
        
        pd = d-i
        
        if pd 
'''