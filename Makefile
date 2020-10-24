all:
	bison -dtv --report=solved asgn4_18CS30051.y
	flex asgn5_18CS30051.l
	gcc -c lex.yy.c
	gcc -c asgn5_18CS30051.c
	gcc -c asgn5_18CS30051.tab.c
	g++ -c asgn5_18CS30051_translator.h
	g++ -c asgn5_18CS30051_translator.cxx
	g++ lex.yy.o asgn5_18CS30051.tab.o asgn5_18CS30051_translator.o -lfl

clean:
	rm lex.yy.c asgn4_18CS30051.tab.c asgn4_18CS30051.tab.h lex.yy.o asgn4_18CS30051.tab.o asgn4_18CS30051.o asgn4_18CS30051.output a.out

test: a.out
	./a.out < asgn5_18CS30051_test1.c > asgn5_18CS30051_quads1.out
	./a.out < asgn5_18CS30051_test2.c > asgn5_18CS30051_quads2.out
	./a.out < asgn5_18CS30051_test3.c > asgn5_18CS30051_quads3.out
	./a.out < asgn5_18CS30051_test4.c > asgn5_18CS30051_quads4.out
	./a.out < asgn5_18CS30051_test5.c > asgn5_18CS30051_quads5.out
	
clean:
	rm a.out\
		lex.yy.c\
		lex.yy.o\
		asgn4_18CS30051.o\
		asgn4_18CS30051.tab.c\
		asgn4_18CS30051.tab.h\
		asgn4_18CS30051.tab.o\
		asgn4_18CS30051.output\
		asgn5_18CS30051_translator.o\
		asgn5_18CS30051_quads1.out\
		asgn5_18CS30051_quads2.out\
		asgn5_18CS30051_quads3.out\
		asgn5_18CS30051_quads4.out\
		asgn5_18CS30051_quads5.out