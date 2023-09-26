square_sum([], 0).
square_sum([H|Numbers], Result) :-
    square_sum(Numbers, Rest),
    Result is Rest + H*H.
