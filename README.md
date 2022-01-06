# MutationTestingExample

These are a few C++ code snippets illustrating dos and don'ts of mutation testing.
(e.g. killed and survived mutants, invalid mutants, subsumed mutants, equivalent mutants, ...)

## Usage
The `find.cpp` file contains three different versions of a find function which goes over a vector or a string searching for a n element.
The `tests.cpp` file contains then a series of tests excercising these find functions.

By manually injecting mutants in find.cpp you can then execute the tests and see whether a mutant gets killed, survives, subsumes, is equivalent, ...
The comments in the code explain which mutants to inject.

## Set-up

This is used within CLion in combination with github.
It's thus quite important to set-up the unit testing environment properly.
In this case we use the google test framework.

Steps.
1) From the terminal go to the appropriate directory
```
cd .. / MutationTestingExample
```

2) Load the googletest submodule
```
git submodule add https://github.com/google/googletest
```
This should result in a message
```
    Cloning into …
```
and the .gitmodules file should be added to the directory

3) Update the CMakeLists.txt
```
# googletest subproject
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
# Specify that Tests relies on "gtest" Link library
target_link_libraries(MutationTestingExampleTest gtest)
```

