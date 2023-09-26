fn maps(values: &Vec<i32>) -> Vec<i32> {
    return values.iter().map(|x| x * 2).collect();
}
