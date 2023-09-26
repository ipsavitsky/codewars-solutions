fn spin_words(words: &str) -> String {
    words
        .split_whitespace()
        .map(|x| if x.len() >= 5 { x.chars().rev().collect::<String>() } else { x.to_string() })
        .collect::<Vec<String>>()
        .join(" ")
}
