fn square_sum(vec: Vec<i32>) -> i32 {
    vec.into_iter().map(|x| x * x).sum()
}
