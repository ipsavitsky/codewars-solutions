#lang racket

;;; https://www.codewars.com/kata/5715eaedb436cf5606000381/

(provide positive-sum)

(define (positive-sum lst)
  (apply + (filter positive? lst)))