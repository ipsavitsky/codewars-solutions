multiply(Int1, Int2, Int3) :-
    Int3 is Int1 * Int2.

maps(A, R) :- 
    maplist(multiply(2), A, R).