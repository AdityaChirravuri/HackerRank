class Person
	def initialize(firstName, lastName, id)
		@firstName = firstName
		@lastName = lastName
		@id = id
	end
	def printPerson()
		print("Name: ",@lastName , ", " + @firstName ,"\nID: " , @id)
	end
end

class Student <Person
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    

    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here
    def initialize(firstname, lastname, id, scores)
        super firstname, lastname, id
        @scores = scores
    end
    
    def calculate()
        sum = 0
        for i in @scores do
            sum = sum +i
        end
        avg = sum/@scores.length()
        
        
        if avg >= 90
            return 'O'
        elsif avg >= 80 and avg < 90
            return 'E'
        elsif avg >=70 and avg < 80
            return 'A'
        elsif avg >=55 and avg < 70
            return 'P'
        elsif avg >=40 and avg < 55
            return 'D'
        else
            return 'T'
        end
    end
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i
numScores = gets.to_i
scores = gets.strip().split().map!(&:to_i)
s = Student.new(firstName, lastName, id, scores)
s.printPerson           
print("\nGrade: " + s.calculate)