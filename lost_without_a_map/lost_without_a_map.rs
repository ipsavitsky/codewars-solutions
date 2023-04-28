/// https://www.codewars.com/kata/57f781872e3d8ca2a000007e
fn maps(values: &Vec<i32>) -> Vec<i32> {
    return values.iter().map(|x| x * 2).collect();
}
