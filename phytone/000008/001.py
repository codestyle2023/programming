def masahat(x,y):
    z=(x*y)/2
    print("masahat:\n",z)
    
a=float(input("zel aval:"))
b=float(input("zel dovom:"))
c=float(input("zel sevom:"))
if ((a**2)+(b**2)==(c**2)):
    masahat(a,b)
if ((c**2)+(b**2)==(a**2)):
    masahat(c,b)
if ((a**2)+(c**2)==(a**2)):
    masahat(a,c)
else:
    print("mohit mosalas is:\n",(a+b+c))
