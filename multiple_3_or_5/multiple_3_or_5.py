def prog_sum(n: int) -> int:
    return n * (n + 1) / 2


def amount_of_division_in_range(number: int, n: int) -> int:
    return number // n - (1 if number % n == 0 else 0)


def solution(number):
    return (
        (
            3 * prog_sum(amount_of_division_in_range(number, 3))
            + 5 * prog_sum(amount_of_division_in_range(number, 5))
            - 15 * prog_sum(amount_of_division_in_range(number, 15))
        )
        if number > 0
        else 0
    )
