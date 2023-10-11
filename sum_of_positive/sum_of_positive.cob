       identification division.
       program-id. PositiveSum.
       data division.

       working-storage section.
       01  i                 pic 9(5).

       linkage section.
       01  arr.
           05 arr-length     pic 9(3).
           05 xs             pic s9(3) occurs 0 to 100 times 
                             depending on arr-length.
       01  result            pic 9(5).

       procedure division using arr result.

          move 0 to result.
          perform varying i from 1 by 1
              until i greater than arr-length

              if xs(i) greater than 0
                  add xs(i) to result
              end-if

          end-perform.

          goback.
       end program PositiveSum.
