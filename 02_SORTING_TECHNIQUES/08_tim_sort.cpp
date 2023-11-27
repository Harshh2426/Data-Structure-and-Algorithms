/*

 Tim Sort is a hybrid sorting algorithm derived from merge sort and insertion sort.
 It uses the advantage of both the algorithm.

 * IT IS THE DEFAULT SORTING ALGORITHM FOR MANY OF THE LANGUAGE LIKE PYTHON AND JAVA
 

 & TIME COMPLEXITY =>

   BEST = O(n)
   AVG = O(nlogn)
   WORST = o(nlogn)

   n is the size of given array and k is the size count array

 & SPACE COMPLEXITY =>

   O(n) 
    

 ! WORKING
 * 1. Tim sort main ek array ko chotte chotte chunk main divide karte hai jise run kehte hai.
 * 2. Ye jo chunk hote hai ek particular order main hote hai increasing ya decreasing order main.
 * 3. Particular order main karne se pehle chunk(run) ke size decide kiya jata hai agar array main chunk size ke element        partcular order main nahi hai to unhe order main karne ke liye binary insertion sort use karte hai.
 * 4. Chunk ka size minimum jo decide kiya utna to atleast hoga hi lekin usse bhi jada ho sakta hai.
 * 5. Agar chunk se size jada ho gaya hai lekin order maintain hai to chunk ka size increase kar sakte hai.
 * 6. Uske bad ine jod denge efficient merge operation apply karke.
*/

