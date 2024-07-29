let positive_sum ls =
  List.filter (fun a -> a > 0) ls
  |> List.fold_left (fun a b -> a + b) 0
