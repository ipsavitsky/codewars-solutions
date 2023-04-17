{https://www.codewars.com/kata/56d0a591c6c8b466ca00118b}
Unit Kata;

Interface

Function IsTriangular (t: Integer): Boolean;

Implementation

Function IsTriangular (t: Integer): Boolean;

Var 
  X : Integer;
Begin
  X := Trunc(Sqrt(t * 2));
  Result := X * (X + 1) = t * 2;
End;

End.
