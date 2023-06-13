a = float(input("Enter side a: "))
b = float(input("Enter side b: "))
c = float(input("Enter side c: "))

if a+b>c and b+c>a and c+a>b:
    if a==b and b==c:
        print("Motasaviol azla")
    elif a==b or b==c or c==a:
        print("Motasaviossagheyn")
    else:
        print("Mokhtalefol azla")
else:
    print("not a triangle.")