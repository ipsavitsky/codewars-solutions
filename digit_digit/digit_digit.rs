fn square_digits(num: u64) -> u64 {
    let new_num = num.to_string();
    let res = new_num.chars().map(|c| {
        let a = c.to_digit(10).unwrap();
        let b = a * a;
        b.to_string()
    });

    return res.collect::<String>().parse::<u64>().unwrap();
}
