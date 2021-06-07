import math

class Complex(object):
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag
        
    def __add__(self, no):
        return Complex(self.real+no.real, self.imag+no.imag)
        
    def __sub__(self, no):
        return Complex(self.real-no.real, self.imag-no.imag)
    def __mul__(self, no):
        return Complex((self.real*no.real - self.imag*no.imag), ((self.real*no.imag)+self.imag*no.real))
    def __truediv__(self, no):
        try: 
            return self.__mul__(Complex(no.real, -1*no.imag)).__mul__(Complex(1.0/(no.mod().real)**2, 0))
        except ZeroDivisionError as e:
            print (e)
            return None
    def mod(self):
        return Complex(pow(self.real**2 + self.imag**2 , 0.5), 0)
        
        
    def __str__(self):
        if self.imag == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imag >= 0:
                result = "0.00+%.2fi" % (self.imag)
            else:
                result = "0.00-%.2fi" % (abs(self.imag))
        elif self.imag > 0:
            result = "%.2f+%.2fi" % (self.real, self.imag)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imag))
        return result

if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x+y, x-y, x*y, x/y, x.mod(), y.mod()]), sep='\n')