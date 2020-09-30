def isPrime(n):
    for i in range(2,int(n**.5)+1):
        if n%i==0:
            return False
    return True

for t in range(int(input())):
    n=int(input())
    if n==1 :
        print("FastestFinger")
    elif n==2 :
        print("Ashishgup")
    elif n%2==1:
        print("Ashishgup")
    else:
        if n&(n-1)==0:
            print("FastestFinger")
        elif n%4==0:
            print("Ashishgup")
        elif isPrime(n/2):
            print("FastestFinger")
        else:  #no prime
            print("Ashishgup")