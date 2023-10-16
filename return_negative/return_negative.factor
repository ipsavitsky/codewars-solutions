USING: kernel math ;
IN: kata

: make-negative ( n -- r )
  dup neg? [ neg ] unless ;