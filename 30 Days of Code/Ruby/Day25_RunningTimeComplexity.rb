n = gets.to_i

for j in 0...n do
    num = gets.to_i
    flag = true
    
    for j in 2..Math.sqrt(num) do
        if num.remainder(j) == 0
            flag = false
            break
        end
    end
    
    if num <=1
        flag = false
    end
    
    if flag
        puts "Prime"
    else puts "Not prime"
    end
end
    