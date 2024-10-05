import numpy as np
a = np.array([0b1010, 0b1100, 0b1111])
b = np.array([0b1100, 0b1010, 0b0101])
c = np.bitwise_and(a, b)
