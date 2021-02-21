if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    s = student_marks[query_name]
    print('{0:.2f}' .format(sum(s)/len(s)))

#the precision can be done by "{0:.numf}".format()
