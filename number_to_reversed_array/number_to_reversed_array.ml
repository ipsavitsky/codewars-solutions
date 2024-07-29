let rec digits a nums =
    match a with
    | 0 -> nums
    | _ -> digits (a / 10) ((a mod 10) :: nums)

let digitize a =
  match a with
  | 0 -> [0]
  | _ ->
    List.rev
    @@ digits a []
