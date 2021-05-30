#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i
count = maxcount =0
while n!=0
    rem = n%2
    if rem == 1
        count = count +1
        if maxcount < count
            maxcount = count
        end
    else
        count = 0
    end
    n = n/2
end

puts maxcount