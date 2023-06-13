a = float(input("Enter side a: "))
b = float(input("Enter side b: "))
c = float(input("Enter side c: "))
if a + b > c and b + c > a and c + a > b:

    if a * a + b * b == c * c:
        area = (a * b) / 2
        print("area =", area)
    elif a * a == b * b + c * c:
        area = (b * c) / 2
        print("area =", area)
    elif b * b == a * a + c * c:
        area = (a * c) / 2
        print("area =", area)
else:
    print("not a triangle.")
    perimeter = a + b + c
    print("perimeter =", perimeter)