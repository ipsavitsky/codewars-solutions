       IDENTIFICATION DIVISION.
       PROGRAM-ID. MAKE-NEGATIVE.
       DATA DIVISION.
       LINKAGE SECTION.
       01 N           PIC S9(8).
       01 RESULT      PIC S9(8).
       PROCEDURE DIVISION USING N RESULT.
           IF N LESS THAN 0 THEN
              MOVE N TO RESULT
           ELSE
              SUBTRACT N FROM ZERO GIVING RESULT
           END-IF.
           GOBACK.
       END PROGRAM MAKE-NEGATIVE.
