/// https://www.codewars.com/kata/54ff3102c1bad923760001f3
fn get_count(string: &str) -> usize {
    let vowels = "aeiou";
    
    string.chars().fold(0, |acc, x| acc + if vowels.contains(x) {1} else {0})
}