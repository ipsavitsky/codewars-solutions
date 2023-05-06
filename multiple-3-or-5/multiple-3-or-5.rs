fn prog_sum(n: i32) -> i32 {
    n * (n + 1) / 2
}

fn amount_of_divisions_in_range(number: i32, n: i32) -> i32 {
    number / n - if number % n == 0 { 1 } else { 0 }
}

fn solution(num: i32) -> i32 {
    if num > 0 {
        3 * prog_sum(amount_of_divisions_in_range(num, 3))
            + 5 * prog_sum(amount_of_divisions_in_range(num, 5))
            - 15 * prog_sum(amount_of_divisions_in_range(num, 15))
    } else {
        0
    }
}
