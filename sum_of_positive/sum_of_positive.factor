USING: math math.order sequences ;
IN: kata

: sum-positive ( seq -- n )
  0 [ 0 max + ] reduce
;