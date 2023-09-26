USING: kernel math  ;
IN: centuries

: century ( x -- x )
  dup 100 mod 0 = [ 100 / ] [ 100 / >fixnum 1 + ] if
;