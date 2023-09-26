(ns kata)

(defn generate_trib
  [a b c]
  (lazy-seq (cons a (generate_trib b c (+ a b c)))))

(defn tribonacci
  [[a b c] n]
  (take n (generate_trib a b c)))
