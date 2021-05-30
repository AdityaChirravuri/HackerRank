n=gets.chomp.to_i
phone=Hash.new
for i in (0..n-1)
    inputArr=gets.strip.split(" ")
    phone[inputArr[0]]= inputArr[1]
end

until (inputs = gets).nil?
  name = inputs.strip
  if phone[name] 
    puts "#{name}=#{phone[name]}"
  else
    puts "Not found"
  end
end