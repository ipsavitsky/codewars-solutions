/// https://www.codewars.com/kata/523f5d21c841566fde000009
fn array_diff<T: PartialEq>(a: Vec<T>, b: Vec<T>) -> Vec<T> {
    b.into_iter().filter(|item| !a.contains(item)).collect()
}