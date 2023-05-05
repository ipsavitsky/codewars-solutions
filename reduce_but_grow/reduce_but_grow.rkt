#lang racket

;;; https://www.codewars.com/kata/57f780909f7e8e3183000078

(provide grow)

(define (grow lst)
  (foldl * 1 lst))
