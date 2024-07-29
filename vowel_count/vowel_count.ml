let explode_string s = List.init (String.length s) (String.get s)

let is_vowel a =
  match a with
  | 'a' | 'e' | 'i' | 'o' | 'u' -> true
  | _ -> false

let get_count (s: string): int =
  List.filter is_vowel (explode_string s) |> List.length
