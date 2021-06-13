# Your code here
def take(arr, length)
   size = arr.length
    return []if  size <= length
    arr[-(size-length)..-1]
end