Unicode in Terminal
===================================

This project shows how to create a set of unit tests without a usage of any external framework.

Another point of this project is to show how to output colorfull text and Unicode symbols and animate some progress bar. This list of unicode codes can be usefull: https://www.compart.com/en/unicode/category/So.

To run tests:

1. Compile cpp modules to object files:
   `g++ -c *.cpp`
2. Compile  maintest file (and other cpp test modules if you have them in separate files):
   `cd test; g++ -c *.cpp`
3. Link all object files into executable testmain:
   `g++ -o testmain *.o ../*.o`
4. Run testmain:
   `./testmain`


For color codes and console management ESC sequences see COLORS.md