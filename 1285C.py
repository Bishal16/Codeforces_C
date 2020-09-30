import math,time
        
def lcm(a, b):
    return a * b // math.gcd(a, b)

x=int(input())
start_time = time.time()
r=int(math.sqrt(x))
c=0
while r>=1:
    c=c-1
    d=int(x/r)
           
    if x%r==0 :
        lc=lcm(d,r) 
        if lc==x:
            print(r,d)
            #print("--- %s seconds ---" % (time.time() - start_time))
            #print(c)
            raise SystemExit()
    r=r-1
    
    
"""
    
import math
x=int(input())
#start_time = time.time()
i=1
while i*i<=x:
 if x%i<1==math.gcd(x//i,i):
     r=i
 i+=1
print(r,x//r)
#print("--- %s seconds ---" % (time.time() - start_time))
"""