fn grow(nums: Vec<i32>) -> i32 {
    return nums.into_iter().fold(1, |acc, x| acc * x);
}
