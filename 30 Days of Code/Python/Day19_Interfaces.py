class AdvancedArithmetic(object):
    def divisorSum(n):
        raise NotImplementedError
import math
class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        l = []
        for i in range(1, int(math.sqrt(n)+1)):
            if n%i == 0:
                if i == (n/i):
                    l.append(i)
                else: 
                    l.append(i)
                    l.append(n/i)
        return int(sum(l))
                
                    


n = int(input())
my_calculator = Calculator()
s = my_calculator.divisorSum(n)
print("I implemented: " + type(my_calculator).__bases__[0].__name__)
print(s)