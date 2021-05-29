class Node

    attr_accessor :data,:next

  def initialize data
        @data = data
        @next = nil
    end
end

class Solution

    def removeDuplicates(head)
      #write your code here  
        cur = head
        while cur.next != nil
            if cur.data == cur.next.data
                cur.next = cur.next.next
            else 
                cur = cur.next
            end
        end 
        return head
    end

    def insert(head,value)
        p=Node.new(value)
        if head==nil
             head=p
         elsif head.next==nil
             head.next=p
         else  
             current = head
         while current.next != nil
             current = current.next
       end 
       current.next = p
      end
      return head   
   end 	

	def display(head)
       current = head
       while current 
          print current.data," "
          current = current.next
       end
   end
end
       
mylist= Solution.new
head=nil
T=gets.to_i
for i in 1..T
    data=gets.to_i
    head=mylist.insert(head,data)
end
head=mylist.removeDuplicates(head)
mylist.display(head)