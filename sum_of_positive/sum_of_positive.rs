fn positive_sum(arr: &[i32]) -> i32 {
    arr.iter().filter(|x| x.is_positive()).sum()
}
