year = int(input("Enter year: "))

if (year % 400 == 0) & (year % 100 == 0):
    print(year , "leap year.")

elif (year % 4 == 0) & (year % 100 != 0):
    print(year , "leap year.")

else:
    print(year, "is not a leap year.")