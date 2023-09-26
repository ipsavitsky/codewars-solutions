fn count_by(x: u32, n: u32) -> Vec<u32> {
    (1..=n).map(|i| i * x).collect()
}
