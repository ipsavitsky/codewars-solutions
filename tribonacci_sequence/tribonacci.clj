(ns kata)

;; https://www.codewars.com/kata/556deca17c58da83c00002db

(defn generate_trib
  [a b c]
  (lazy-seq (cons a (generate_trib b c (+ a b c)))))

(defn tribonacci
  [[a b c] n]
  (take n (generate_trib a b c)))
