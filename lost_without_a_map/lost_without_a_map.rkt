#lang racket

(provide maps)

(define (maps lst)
  (map (lambda (number) (* 2 number)) lst))