module Codewars.Kata.Negative where

makeNegative :: (Num a, Ord a) => a -> a
makeNegative x = negate . abs