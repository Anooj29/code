def convert_to_uppercase(input_string):
    """
    Function to convert lowercase letters to uppercase in a given string.
    
    Args:
    input_string (str): The input string containing lowercase letters.
    
    Returns:
    str: The input string with all lowercase letters converted to uppercase.
    """
    return input_string.upper()

# Example usage:
input_string = input("hello world")
uppercase_string = convert_to_uppercase(input_string)
print(uppercase_string)  # Output: "HELLO WORLD"
