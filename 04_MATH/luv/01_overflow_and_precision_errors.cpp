/*

 * OVERFLOW OCCURS WHEN U ARE USING DATATYPE WITH SMALLER CAPACITY AND TRY TO STORE LARGER DATATYPE VARIBLE

 ! PRECATION

 ^ WHEN U ARE MULTIPLYING TWO NUMBER AND THEIR RANGE IS BETWEEN 1 TO 1e9, THEN USE LONG LONG TO AVOID OVERFLOW.


 ! CAPACITY OF DOUBLE IS GREATER THAN LONG LONG. THEN WHY WE ARE NOT USING IT MORE ?
   THIS IS BEACUSE THE PRECISION OF DOUBLE IS LESS.

 ! IF WE ARE USING A LARGE DATATYPE AND SMALLER DATATYPE THEN CALACIULALTION IS PERFORMED IN LARGER DATATYPE
 EX - cout<<100000*100000<<endl; => This gives overflow
      cout<<1ll*100000*100000<<endl;
*/