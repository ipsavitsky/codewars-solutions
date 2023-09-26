fn array_diff<T: PartialEq>(a: Vec<T>, b: Vec<T>) -> Vec<T> {
    b.into_iter().filter(|item| !a.contains(item)).collect()
}
