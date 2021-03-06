#include <vector>
#include <string>

int findLastOccurrence(std::string toSearch, char toFind) {
    if (toSearch.size() == 0)
        return -1;
    for (int i = toSearch.size() - 1; i >= 0; i--)
        if (toSearch[i] == toFind)
            return i;
    return -1;
}


//Correct code for the for loop
//for (int i = toSearch.size() - 1; i >= 0; i--)


//Mutant 1 - replace i >= 0 by i < 0
//All tests which return an actual value will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)

//Mutant 2 - replace i >= 0 by i >0
//for (int i = x.size() - 1; i >= 0; i--)
//for (int i = x.size() - 1; i > 0; i--)
//This mutant is not killed, we need to add an extra test

//Mutant 3 - replace (toSearch[i] == toFind) by (toSearch[i] != toFind)
//All tests with a non-empty vector will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)
//[  FAILED  ] FindLastTests.noOccurrence (1 ms)
//Mutant 3 is subsumed by mutant 1 -- all tests that kill mutant 3 also kill mutant 1.
//Mutant 1 is harder to kill

//Mutant 4 - replace == 0 by <=0
//if (toSearch.size() <= 0)
//This is an equivalent mutant



int findLast(std::vector<int> x, int y) {
    if (x.size() == 0)
        return -1;
    for (int i = x.size() - 1; i >= 0; i--)
        if (x[i] == y)
            return i;
    return -1;
}


//Mutant 1 - replace i >= 0 by i < 0
//All tests which return an actual value will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)

//Mutant 2 - replace i >= 0 by i >0
//for (int i = x.size() - 1; i >= 0; i--)
//for (int i = x.size() - 1; i > 0; i--)
//This mutant is not killed, we need to add an extra test

//Mutant 3 - replace (x[i] == y) by (x[i] != y)
//All tests with a non-empty vector will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)
//[  FAILED  ] FindLastTests.noOccurrence (1 ms)
//Mutant 3 is subsumed by mutant 1 -- all tests that kill mutant 3 also kill mutant 1.
//Mutant 1 is harder to kill

//Mutant 4 - replace == 0 by <=0
//if (x.size() <= 0) return -1;
//if (x.size() == 0) return -1;
//This is an equivalent mutant




int findFirst(std::vector<int> x, int y) {
    if (x.size() == 0)
        return -1;
    for (int i = 0; i <= x.size() - 1; i++)
        if (x[i] == y)
            return i;
    return -1;
}

// Correct line should read like follows
//    for (int i = 0; i <= x.size() - 1; i++)

//Mutant 1 - replace i <= x.size() - 1 by i >= x.size()
//All tests which return an actual value will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)

//Mutant 2 - replace i <= x.size() - 1 by i < x.size() - 1
//This mutant is not killed, we need to add an extra test

//Mutant 3 - replace (x[i] == y) by (x[i] != y)
//All tests with a non-empty vector will fail
//[  FAILED  ] FindLastTests.doubleOccurrence (0 ms)
//[  FAILED  ] FindLastTests.noOccurrence (1 ms)
//Mutant 3 is subsumed by mutant 1 -- all tests that kill mutant 3 also kill mutant 1.
//Mutant 1 is harder to kill

//Mutant 4 - replace == 0 by <=0
//This is an equivalent mutant


