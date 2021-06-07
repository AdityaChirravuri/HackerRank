from fractions import Fraction
from functools import reduce
import operator

def product(fracs):
     # complete this line with a reduce statement
    #k = [lambda x, y: x*y, fracs]
    t = reduce(operator.mul, fracs)
    
    return t.numerator, t.denominator
if __name__ == '__main__':
    fracs = []
    for _ in range(int(input())):
        fracs.append(Fraction(*map(int, input().split())))
    result = product(fracs)
    print(*result)