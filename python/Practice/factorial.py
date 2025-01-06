# Code to find factorial of any number

num = int(input("Enter number: "))
factorial = 1

if (num < 0):
    print("Negative number factorial does not exist")

elif(num == 0):
    print("factorial of number is: 1")

if (num > 0):
    for i in range(1, num+1):
        factorial = factorial * i
print("factorial of number is: ",factorial)