
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
