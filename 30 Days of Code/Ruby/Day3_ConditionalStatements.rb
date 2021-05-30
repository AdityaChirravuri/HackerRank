#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i

if n%2 !=0
    then puts "Weird"
else 
    if n>=2 and n<=5
        then puts "Not Weird"
    elsif n>=6 and n<=20
        then puts "Weird"
    elsif n>20
        then puts "Not Weird"
    end
end