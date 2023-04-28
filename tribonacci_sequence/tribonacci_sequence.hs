-- https://www.codewars.com/kata/556deca17c58da83c00002db
module Tribonacci where

fibs = map fst $ iterate (\(x,y,z) -> (y,z,x+y+z)) (a,b,c)

tribonacci :: Num a => (a, a, a) -> Int -> [a]
tribonacci (a, b, c) n = take n (fibs)