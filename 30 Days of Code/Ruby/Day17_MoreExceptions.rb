class RangeError < StandardError
end
# Write your code here
class Calculator
    def power(n, p)
        if p == 0
            return 1
        end
        
        if n<0 or p < 0
            raise RangeError.new "n and p should be non-negative"
        end
        return power(n, p-1)*n
    end
end

myCalculator = Calculator.new()

t = gets.to_i

for i in 1..t
    n, p = gets.split.map(&:to_i)
    begin
        ans = myCalculator.power(n, p)
        puts ans.to_i
    rescue RangeError => e
        puts e.message
    end
end