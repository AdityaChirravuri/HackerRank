#!/bin/ruby

require 'json'
require 'stringio'



arr = Array.new(6)

6.times do |i|
    arr[i] = gets.rstrip.split(' ').map(&:to_i)
end
maxsum = -10000
sum = 0
6.times do |i|
    6.times do |j|
        if i>1 and j>1
            sum = arr[i][j] + arr[i][j-1] + arr[i][j-2] + arr[i-1][j-1] + arr[i-2][j] + arr[i-2][j-1] + arr[i-2][j-2]
            
            if maxsum < sum
                maxsum = sum
            end
        end
    end
end
puts maxsum