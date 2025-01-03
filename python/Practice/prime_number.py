# Check prime number 

num = int(input("Enter the number: "))

for i in range (2, num):
    if num % i ==0:
        print("not prime number")
        break

else:
        print("is prime number")
