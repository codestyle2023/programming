month = int(input("Enter the month : "))

if month >= 1 and month <= 6 :
    print("31 rooz")
elif month >= 7 and month <=11 :
    print("30 rooz")
elif month == 12 :
    print("29 rooz")
else:
    print("not valid")