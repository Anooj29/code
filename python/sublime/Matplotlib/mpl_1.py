import sympy as sp

x = sp.symbols('x')
f = sp.sin(x)  # 

f_prime = sp.diff(f, x)

print(f_prime)

x_value = 0 

f_at_x = f.subs(x, x_value)

f_prime_at_x = f_prime.subs(x, x_value)


tangent_equation = f_prime_at_x * (x - x_value) + f_at_x


print("Equation of the tangent line:", tangent_equation)
