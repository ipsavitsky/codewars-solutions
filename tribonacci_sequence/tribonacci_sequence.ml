exception InvalidArguments of string

let rec gen_trib list last_1 last_2 last_3 n =
  match n with
  | 0 -> list
  | k -> let last_new = last_1 + last_2 + last_3 in
    gen_trib (list @ [last_new]) last_2 last_3 last_new (n - 1)

let tribonacci signature n =
  match n, signature with
  | 0, _ -> []
  | 1, x :: _ -> [x]
  | 2, x :: y :: _ -> [x; y]
  | _, [l1; l2; l3] -> gen_trib signature l1 l2 l3 (n - 3)
  | _, _ -> raise (InvalidArguments "Invalid signature")
