(ns kata)

(defn positive-sum
  [xs]
  (reduce + (filter #(> % 0) xs)))
