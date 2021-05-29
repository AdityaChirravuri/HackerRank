class Node
    attr_accessor :left,:right,:data
  def initialize data
      @left=@right=nil
      @data=data
    end
end
class Solution
    def insert (root,data)
        if root==nil
            return Node.new(data)
        else
            if data<=root.data
                cur=self.insert(root.left,data)
                root.left=cur
            else
                cur=self.insert(root.right,data)
                root.right=cur
            end
        end
        return root
    end
    
    def max(a, b)
        if a>b
            temp = a
        else
            temp = b
        end
        return temp 
    end
        
    
    def getHeight(root)
      #Write your code here
      if root == nil
        return -1
      end
      
      return 1+max(getHeight(root.left), getHeight(root.right))
    end
end

myTree=Solution.new