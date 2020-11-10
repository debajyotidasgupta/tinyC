assembly: tinyC libass2_18CS30051.a
	@echo "\n------------------- Generating Quads for the test files ---------------\n"

	./tinyC 1 > ass6_18CS30051_quads1.out
	./tinyC 2 > ass6_18CS30051_quads2.out
	./tinyC 3 > ass6_18CS30051_quads3.out
	./tinyC 4 > ass6_18CS30051_quads4.out
	./tinyC 5 > ass6_18CS30051_quads5.out
	./tinyC 6 > ass6_18CS30051_quads6.out
	./tinyC 7 > ass6_18CS30051_quads7.out

	@echo "\n-------------    Generating the object files from assembly code   ---------------\n"

	gcc -c ass6_18CS30051_1.s
	gcc -c ass6_18CS30051_2.s
	gcc -c ass6_18CS30051_3.s
	gcc -c ass6_18CS30051_4.s
	gcc -c ass6_18CS30051_5.s
	gcc -c ass6_18CS30051_6.s
	gcc -c ass6_18CS30051_7.s

	@echo "\n-------------    Compiling the test files   ---------------\n"

	gcc ass6_18CS30051_1.o -o test1 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_2.o -o test2 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_3.o -o test3 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_4.o -o test4 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_5.o -o test5 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_6.o -o test6 -L. -lass2_18CS30051 -no-pie
	gcc ass6_18CS30051_7.o -o test7 -L. -lass2_18CS30051 -no-pie

	@echo "\n###########  Use ./test<i> for testing the ith file  ##########\n"

libass2_18CS30051.a:
	gcc -c ass2_18CS30051.c
	ar -rcs libass2_18CS30051.a ass2_18CS30051.o

tinyC: lex.yy.o ass6_18CS30051.tab.o ass6_18CS30051_translator.o ass6_18CS30051_target_translator.o
	g++ lex.yy.o ass6_18CS30051.tab.o ass6_18CS30051_translator.o \
	ass6_18CS30051_target_translator.o -lfl -o tinyC

ass6_18CS30051_target_translator.o: ass6_18CS30051_target_translator.cxx
	g++ -c ass6_18CS30051_target_translator.cxx

ass6_18CS30051_translator.o: ass6_18CS30051_translator.cxx ass6_18CS30051_translator.h
	g++ -c ass6_18CS30051_translator.h
	g++ -c ass6_18CS30051_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass6_18CS30051.tab.o: ass6_18CS30051.tab.c
	g++ -c ass6_18CS30051.tab.c

lex.yy.c: ass6_18CS30051.l ass6_18CS30051.tab.h ass6_18CS30051_translator.h
	flex ass6_18CS30051.l

ass6_18CS30051.tab.c: ass6_18CS30051.y
	bison -dtv ass6_18CS30051.y -W

ass6_18CS30051.tab.h: ass6_18CS30051.y
	bison -dtv ass6_18CS30051.y -W


	
clean:
	rm lex.yy.c\
	   ass6_18CS30051.tab.c\
	   ass6_18CS30051.tab.h\
	   lex.yy.o\
	   ass6_18CS30051.tab.o\
	   ass6_18CS30051.output\
	   ass6_18CS30051_translator.o\
	   test1\
	   test2\
	   test3\
	   test4\
	   test5\
	   test6\
	   test7\
	   tinyC\
	   ass6_18CS30051_target_translator.o\
	   ass6_18CS30051_translator.h.gch\
	   ass6_18CS30051_quads1.out\
	   ass6_18CS30051_quads2.out\
	   ass6_18CS30051_quads3.out\
	   ass6_18CS30051_quads4.out\
	   ass6_18CS30051_quads5.out\
	   ass6_18CS30051_quads6.out\
	   ass6_18CS30051_quads7.out\
	   libass2_18CS30051.a\
	   ass2_18CS30051.o\
	   ass6_18CS30051_1.o\
	   ass6_18CS30051_2.o\
	   ass6_18CS30051_3.o\
	   ass6_18CS30051_4.o\
	   ass6_18CS30051_5.o\
	   ass6_18CS30051_6.o\
	   ass6_18CS30051_7.o\
	   ass6_18CS30051_1.s\
	   ass6_18CS30051_2.s\
	   ass6_18CS30051_3.s\
	   ass6_18CS30051_4.s\
	   ass6_18CS30051_5.s\
	   ass6_18CS30051_6.s\
	   ass6_18CS30051_7.s
