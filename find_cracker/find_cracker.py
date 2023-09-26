"""https://www.codewars.com/kata/59f70440bee845599c000085"""

def find_hack(arr: list[str | int | list[str]]) -> list[str]:
    marks = {"A": 30, "B": 20, "C": 10, "D": 5}
    res = []
    for name, score, grades in arr:
        sum_of_grades = sum(marks.get(i, 0) for i in grades)
        if len(grades) >= 5 and all(i in ["A", "B"] for i in grades):
            sum_of_grades += 20
        sum_of_grades = min(sum_of_grades, 200)
        if sum_of_grades != score:
            res.append(name)
    return res
