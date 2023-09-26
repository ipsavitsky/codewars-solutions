(ns kata)

(defn square-sum
  [lst]
  (reduce + (map #(* % %) lst)))
