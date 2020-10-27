all:
	bison -dtv asgn5_18CS30051.y
	g++ -c asgn5_18CS30051.tab.c
	flex asgn5_18CS30051.l
	g++ -c lex.yy.c
	g++ -c asgn5_18CS30051_translator.h
	g++ -c asgn5_18CS30051_translator.cxx
	g++ lex.yy.o asgn5_18CS30051.tab.o asgn5_18CS30051_translator.o -lfl

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
		asgn5_18CS30051.tab.c\
		asgn5_18CS30051.tab.h\
		asgn5_18CS30051.tab.o\
		asgn5_18CS30051.output\
		asgn5_18CS30051_translator.o\
		asgn5_18CS30051_translator.h.gch\
		asgn5_18CS30051_quads1.out\
		asgn5_18CS30051_quads2.out\
		asgn5_18CS30051_quads3.out\
		asgn5_18CS30051_quads4.out\
		asgn5_18CS30051_quads5.out
