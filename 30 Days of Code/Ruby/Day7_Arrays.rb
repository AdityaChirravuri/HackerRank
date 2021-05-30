#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i

arr = gets.rstrip.split(' ').map(&:to_i)
arr = arr.reverse()
for i in arr
    printf("%d ", i)
    #puts " "
end

