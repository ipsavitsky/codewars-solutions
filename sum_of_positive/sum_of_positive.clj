(ns kata)

;; https://www.codewars.com/kata/5715eaedb436cf5606000381/

(defn positive-sum
  [xs]
  (reduce + (filter #(> % 0) xs)))
