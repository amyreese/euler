
# monday = day 0
# sunday = day 6

normal_days = {
    1: 31,
    2: 28,
    3: 31,
    4: 30,
    5: 31,
    6: 30,
    7: 31,
    8: 31,
    9: 30,
    10: 31,
    11: 30,
    12: 31,
}
leap_days = {
    1: 31,
    2: 28,
    3: 31,
    4: 30,
    5: 31,
    6: 30,
    7: 31,
    8: 31,
    9: 30,
    10: 31,
    11: 30,
    12: 31,
}

def days(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return leap_days
            return normal_days
        return leap_days
    return normal_days

year = 1901
day = 1

sundays = 0

while year <= 2000:
    d = days(year)
    month = 1

    while month <= 12:
        day += d[month]
        day = day % 7

        if day == 6:
            sundays += 1

        month += 1

    year += 1

print sundays
