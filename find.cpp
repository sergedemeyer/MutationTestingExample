#include <vector>

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