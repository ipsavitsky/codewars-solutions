likes([], "no one likes this").

likes([X], Result) :-
    sformat(Result, "~w likes this", [X]).

likes([X, Y], Result) :-
    sformat(Result, "~w and ~w like this", [X, Y]).
    
likes([X, Y, Z], Result) :-
    sformat(Result, "~w, ~w and ~w like this", [X, Y, Z]).

likes([X, Y | Tail], Result) :-
    length(Tail, TailSize),
    sformat(Result, "~w, ~w and ~d others like this", [X, Y, TailSize]).