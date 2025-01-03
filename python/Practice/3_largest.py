# Find largest amoung 3 numbers

num1 = int(input("First number: "))
num2 = int(input("second number: "))
num3 = int(input("Third number: "))


if (num1 > num2) & (num1 > num3):
    print(num1, "is the largest number.")


elif (num2 > num1) & (num2 > num3):
    print(num2, "is the largest number.")
    
else:
    print(num3, "is the largest.")