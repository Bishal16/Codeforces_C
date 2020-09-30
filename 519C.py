a,b=map(int,input().split())
i=0
ans=0
while True:
    if a>=b:
        
        if a==0 or b==0 or a+b<3:           
            break
        else:
            ans=ans+1
        a=a-2
        b=b-1
        
    else:
        
        if a==0 or b==0 or a+b<3:            
            break   
        else:
            ans=ans+1
        a=a-1
        b=b-2
    i=i+1
    
print(ans)

