# _*_ Makefile _*_

#entire file is made up of receipe
#target: dependencies
#    action (what command we need to type to build the traget from depedencies)
# by default make file only build the first target to make furthur receipes use "make second_target"
#to build different target we need to make different target
#it only recompile things which changed in "DEPEDENCY TREE"


all: finalGeo tip

finalGeo: computeDistance.o doubleInp.o
	clang computeDistance.o doubleInp.o -o finalGeo -lm

#for dependencies in fianl geo
computeDistance.o: computeDistance.c doubleInp.h
	clang -c computeDistance.c

doubleInp.o: doubleInp.c 
	clang -c doubleInp.c

clean:
	rm -f *.o finalGeo tip

tip: tips.o doubleInp.o doubleInp.h
	clang tips.o doubleInp.o -o tip

tips.o: tips.c
	clang -c tips.c
