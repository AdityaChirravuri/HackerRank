# Your code here
def serial_average(str)
    arr = str.split("-")
    num = (((arr[1].to_f) + (arr[2].to_f))/2).round(2)
    return "#{arr[0]}" + "-" + "#{num}"
end