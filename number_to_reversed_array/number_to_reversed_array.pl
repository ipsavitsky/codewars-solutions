% https://www.codewars.com/kata/5583090cbe83f4fd8c000051/
num_to_digits(0, [0]).

num_to_digits(N, Digits) :-
    N > 0,
    num_to_digits_helper(N, [], Digits).

num_to_digits_helper(0, Acc, Acc).

num_to_digits_helper(N, Acc, Digits) :-
    N > 0,
    Digit is N mod 10,
    NextN is N // 10,
    num_to_digits_helper(NextN, [Digit|Acc], Digits).

digitize(N, Result) :- 
    num_to_digits(N, Digits),
    reverse(Digits, Result).
