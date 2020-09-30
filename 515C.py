def fact(n):
    if n==0:
        return 1
    else: 
        f=1
        for i in range(1,int(n+1)):
            f=f*i
    return f

fc_ls=[]
for i in range (2,10):
    fc_ls.append(fact(i))

n=int(input())
a=int(input())
aa=a
mul=1
ls=[]
for i in range(n):
    p=a%10
    a=a/10
    ls.append(int(p))
    mul=mul*fact(p)
#print(ls)    
#print(mul)
if mul & mul-1==0:
    import math
    p=""    
    for i in range(int(math.log(mul,2))):
       p=p+'2' 
    print(p)               
    raise SystemExit
    
    


ans_ls=[]
i=0
while i<8:
    if mul % fc_ls[i]==0:
        mul = int(mul / fc_ls[i])
        ans_ls.append(fc_ls[i])
    else:
        i=i+1
#print('mul',mul)
#print(ans_ls)

p=0
while True:
    
    mul = mul * ans_ls[-1]
    
    del ans_ls[-1]
    if len(ans_ls)==0:
        ls.sort(reverse=True)
        p=""
        for i in range(len(ls)):
            p=p+str(ls[i])
        #print(p)
        raise SystemExit
    #print(mul)
    #print(ans_ls)
    for i in range(0,8):  # 7777553333222222222222 012345781234578
       
        if mul % fc_ls[i]==0 and int(mul/fc_ls[i]) in fc_ls:
            ans_ls.append(fc_ls[i])
            ans_ls.append(int(mul/fc_ls[i]))
            p=-1
            #print(fc_ls[i],mul/fc_ls[i])
            break
    if p==-1:
        break
ans_ls.sort(reverse=True)
p=""
for i in range(len(ans_ls)):
    p=p+str(fc_ls.index(ans_ls[i])+2)
    
print(p)    
