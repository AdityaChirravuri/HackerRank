import calendar

d, m, y = map(int, input().split())
#print(d, m, y)
print(calendar.day_name[calendar.weekday(y, d, m)].upper())

