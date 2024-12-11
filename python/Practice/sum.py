# Adding two numbers:
print("This program will add two numbers")
a = float(input("Enter first number to add: "))
b = float(input("Enter sencond number to add: "))

sum = float(a + b)

print("The sum of two numbers is: ", sum)


########################################################################

# Sum of n numbers taking inputs from users.

n = int(input("Enter number of values you want to add: "))

sum = 0

for i in range(n):
    num = float(input(f"Enter number {1 + i}: "))
    sum += num

print("The sum of values is: ", sum)



#########################################################################

# Sum of numbers without taking number of values to add.

sum = 0

while True:
    num = input("Enter number: ")
    if num == "":
        break
    sum += float(num)

print("The sum of Entered values is: ", sum)