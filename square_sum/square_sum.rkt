#lang racket

;;; https://www.codewars.com/kata/515e271a311df0350d00000f/

(provide square-sum)

(define (square-sum numbers)
  (apply + (map (lambda (number) (* number number)) numbers)))