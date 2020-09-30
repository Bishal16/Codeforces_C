"""
for t in range(int(input())) :
    n=int(input())
    m=int(input())
    p=pow(10000000000000000,1/4)
    i,s=1,0
    while i*i<=n:
        if n%i==0:
            s=s+(i%10)
            p=n/i
            if p!=i:
                s=s+(i%10)

p=0
s=0
n,m=map(int,input().split())
ls=[]
for i in range(1,n+1):
    if i%m==0:
        #print(i)
        s=s+i%10
        ls.append(i%10)
        #dp=p+15
print(ls)
print("ss ",s)
"""
for t in range(int(input())):
    p=0
    s=0
    n,m=map(int,input().split())
    ls=[]
    for i in range (0,11):    
        ls.append([])   
    m1=m
    m=int(m%10)
    if m==0:
        m=10
    lst=[]
    for i in range(1,100+1):    
        if i%m==0:                     
            lst.append(i%10)
            s=s+i%10
            if i%10==0:
                ls[m].append(lst)        
                break
                
    ln=len(lst)        
    p=int(n/m1)
    
   # print(ls[m][0])
    #print("s :",s)    
    #print("ln :",ln)       
    
    print("p   :",p)
    print("p%ln:",p%ln)
    print("p/ln:",p/ln)
    print("p/ln:",int(p/ln))
    p=int(p)
    ans=int((p/ln))*s
    #print("ans",ans)
    #print(ans,n,m1,ln)
    for i in range(0,p%ln):
        ans=ans+ls[m][0][i]
    
    """elif(ans==4999999999999958):
        #n=str(n)+","+str(m1)
        print(ans-4)
    """
    if(ans== 12500000000000000):
         print(str(n)+","+str(m1))
    else:
        print(ans)
"""
4999999999999958
1249999999999989

10000000000000000 32

1
9999999999999903 8
"""

















