#lang racket

(provide remove-char)

(define (remove-char str)
  (substring str 1 (- (string-length str) 1)))
