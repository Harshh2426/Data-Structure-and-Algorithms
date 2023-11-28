/*

If a task can be done in one of n1 ways or one of n2 ways, where none of the set of n1 ways is the same as any of the set of n2 ways, then there are n1 + n2 ways to do the task. The sum-rule mentioned above states that if there are multiple sets of ways of doing a task, there shouldn’t be any way that is common between two sets of ways because if there is, it would be counted twice and the enumeration would be wrong. 

The principle of inclusion-exclusion says that in order to count only unique ways of doing a task, we must add the number of ways to do it in one way and the number of ways to do it in another and then subtract the number of ways to do the task that are common to both sets of ways. 

The principle of inclusion-exclusion is also known as the subtraction principle. For two sets of ways Aiand  A2, the enumeration would like- 
| A1 ∪ A2  |= |A1 |+ | A2| – |A1 ∩ A2|

Ex - Program to count the number of numbers between 1 and 1000, including both, that are divisible by 3 or 4.


int countDivisors(int N, int a, int b)
{
    & Counts of numbers
    & divisible by a and b

    int count1 = N / a;
    int count2 = N / b;
 
    & inclusion-exclusion
    & principle applied
    int count3 = (N / (a * b));
 
    return count1 + count2 - count3;
}

*/