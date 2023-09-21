(ns kata)

;; https://www.codewars.com/kata/515e271a311df0350d00000f/

(defn square-sum
  [lst]
  (reduce + (map #(* % %) lst)))
