# Dependencies
import math

# Defining parameters from stdin
mu, sig = [float(num) for num in input().split(" ")]
Cutoff1 = float(input())
Cutoff2 = float(input())

# Define cumulative standard normal distribution:
def phi(x, mu, sig):
    '''Cumulative distribution function for the standard normal distribution'''
    return (1.0 + math.erf((x - mu) / (sig * math.sqrt(2.0)))) / 2.0

"""It asks for a percentage, so full marks is 100 and the probability must be multiplied by 100 to become a percentage"""

# Question 1
print(round(100 - (phi(Cutoff1, mu, sig) * 100), 2))

# Question 2
print(round(100 - (phi(Cutoff2, mu, sig) * 100), 2))

# Question 3
print(round(phi(Cutoff2, mu, sig) * 100, 2))
