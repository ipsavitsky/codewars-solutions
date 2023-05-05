% https://www.codewars.com/kata/515e271a311df0350d00000f
square_sum([], 0).
square_sum([H|Numbers], Result) :-
    square_sum(Numbers, Rest),
    Result is Rest + H*H.