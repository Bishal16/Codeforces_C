t=int(input())
for i in range(t):
    n=int(input())
    val=list(map(int,input().split()))   
    c=1
    p1=0
    p2=0
    if val[n-2]>=val[n-1] and n>1:
        for j in range(n-1,0,-1):
            if val[j-1]>=val[j] and p1==0:
                c=c+1                
            elif val[j-1]<=val[j]:
                c=c+1
                p1=1
            else:
                break
            #if p1==1 and val[j-1]>val[j]:
                #break
    elif val[n-1]>val[n-2] and n>1:
        
        for j in range(n-1,0,-1):
            if val[j]>=val[j-1]:
                c=c+1                
            else:
                break
    print(n-c)
       
