# Enter your code here. Read input from STDIN. Print output to STDOUT
n = gets.chomp.to_i

for i in 0...n do
    s = gets.chomp
    even = ""
    odd = ""
    for j in 0...s.size do
        if j.even?
            even[even.size, 0] = s[j]
        else
            odd[odd.size, 0]= s[j]
        end
    end
    puts even + " " + odd
end