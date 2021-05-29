#!/bin/ruby

require 'json'
require 'stringio'

def BubbleSort array
    swap_count = 0
    array.each do
        array.each_with_index do |a, index|
            break if index == (array.length - 1)
            if a > array[index+1]
                array[index],array[index+1] = array[index +1], array[index]
                swap_count += 1
            end
        end
    
    end
    puts "Array is sorted in "+ "#{swap_count}" +" swaps."
    puts "First Element: " + "#{array[0]}"
    puts "Last Element: " + "#{array[array.length-1]}"
end
    
    

n = gets.strip.to_i

a = gets.rstrip.split.map(&:to_i)
BubbleSort(a)

# Write your code here
