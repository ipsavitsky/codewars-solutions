prog_sum(N, Sum) :- 
    Sum is (N * (N+1)) div 2.

amount_of_divisions_in_range(Number, N, Am) :-
    (Number mod N =:= 0 -> T is 1; T is 0),
    Am is (Number div N) - T.

solution(Number, Result) :- 
    amount_of_divisions_in_range(Number, 3, N3),
    amount_of_divisions_in_range(Number, 5, N5),
    amount_of_divisions_in_range(Number, 15, N15),
    prog_sum(N3, Sum3),
    prog_sum(N5, Sum5),
    prog_sum(N15, Sum15),
    Result is 3 * Sum3 + 5 * Sum5 - 15 * Sum15.
