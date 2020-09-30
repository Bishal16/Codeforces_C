n=int(input())
ls=list(map(int,input().split()))
s = sum(ls)
ans=0
ot=int(s/3)
otc=0
tt=ot*2
p=0
if s%3==0:
    for i in range(n-1):
        p=p+ls[i]
        if p==tt:
            ans=ans+otc
        if p==ot:
            otc=otc+1
    print(ans)
else:
    print(0)    
        
        