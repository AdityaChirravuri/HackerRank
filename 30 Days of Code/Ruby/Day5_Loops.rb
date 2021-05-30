#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i
for j in 1..10 do
    puts "#{n}" + " x " + "#{j}" + " = " + "#{n*j}"
end
