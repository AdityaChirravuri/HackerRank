# create the Solution class
class Solution
      # complete the code
      attr_accessor :arr, :a
      
      def initialize
        @arr = []
        @a = []
      end
      
    def push_character(ch)
        arr.push(ch)
    end
    
    def enqueue_character(ch)
        a.push(ch)
    end
    
    def pop_character()
        arr.pop
    end
    
    def dequeue_character()
        a.shift
    end
      
end


# create Solution class object
solution = Solution.new

# read the input
input = gets

input.split('').each do |c|
    # push the character to stack
    solution.push_character c
    
    # enqueue the character to queue
    solution.enqueue_character c
end

# check if input string is palindrome or not
is_palindrome = true

(input.length / 2).times do
    if solution.pop_character != solution.dequeue_character
        is_palindrome = false
        break
    end
end

# print if string is palindrome or not
if is_palindrome
    puts "The word, #{input}, is a palindrome."
else
    puts "The word, #{input}, is not a palindrome."
end