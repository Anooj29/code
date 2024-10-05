def switch_case(input_string):
   
    return input_string.swapcase()

def main():
    input_string = input("Enter a string containing letters: ")
    switched_string = switch_case(input_string)
    print("String with switched case:", switched_string)

if __name__ == "__main__":
    main()
