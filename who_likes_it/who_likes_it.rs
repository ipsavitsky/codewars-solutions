fn likes(names: &[&str]) -> String {
    match names[..] {
        [] => String::from("no one likes this"),
        [x] => format!("{} likes this", x),
        [x, y] => format!("{} and {} like this", x, y),
        [x, y, z] => format!("{}, {} and {} like this", x, y, z),
        [x, y, rest @ ..] => format!("{}, {} and {} others like this", x, y, rest.len()),
    }
}
