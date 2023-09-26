USING: kernel sequences ;
IN: kata

: feast ( beast dish -- ? )
  2dup
  first swap
  first = -rot
  last swap
  last = and
;