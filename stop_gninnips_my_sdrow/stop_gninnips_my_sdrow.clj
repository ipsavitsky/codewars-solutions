(ns clojure.spin-words
  (:require [clojure.string :as str]))

(defn spin-words
  [strng]
  (str/join " " (map #(if (>= (count %) 5)
                        (apply str (reverse %)) %)
                        (str/split strng #" "))))
