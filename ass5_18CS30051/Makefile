tinyC_compiler: ass6_18CS30051.tab.o lex.yy.o ass6_18CS30051_translator.o ass6_18CS30051_target_translator.o 
	@g++ -g ass6_18CS30051_translator.o ass6_18CS30051_target_translator.o lex.yy.o ass6_18CS30051.tab.o -lfl -o tinyC_compiler
	@./tinyC_compiler < ass6_18CS30051_test1.c
	@./tinyC_compiler < ass6_18CS30051_test2.c 
	@./tinyC_compiler < ass6_18CS30051_test3.c
	@./tinyC_compiler < ass6_18CS30051_test4.c
	@./tinyC_compiler < ass6_18CS30051_test5.c
	@echo " USE COMMAND (make run) TO CREATE THE TEST RUN FILES"

lex.yy.c: ass6_18CS30051.l
	@flex ass6_18CS30051.l
ass6_18CS30051.tab.c: ass6_18CS30051.y
	bison -dtv ass6_18CS30051.y -W
ass6_18CS30051_target_translator.o: ass6_18CS30051_target_translator.cxx
	@g++ -g -c ass6_18CS30051_target_translator.cxx
ass6_18CS30051_translator.o: ass6_18CS30051_translator.cxx
	@g++ -g -c ass6_18CS30051_translator.cxx
lex.yy.o: lex.yy.c
	@g++ -g -c lex.yy.c
ass6_18CS30051.tab.o:    ass6_18CS30051.tab.c
	@g++ -g -DYYDEBUG -c ass6_18CS30051.tab.c
libass2_18CS30051.a: ass2_18CS30051.o
	@ar -rcs libass2_18CS30051.a ass2_18CS30051.o

ass2_18CS30051.o: ass2_18CS30051.c myl.h
	@gcc -Wall  -c ass2_18CS30051.c

runtest1: ass6_18CS30051_test1.o libass2_18CS30051.a
	@gcc -g ass6_18CS30051_test1.o -o runtest1 -L. -lass2_18CS30051
ass6_18CS30051_test1.o: ass6_18CS30051_test1.s myl.h
	@gcc -g -Wall  -c ass6_18CS30051_test1.s -o ass6_18CS30051_test1.o

runtest2: ass6_18CS30051_test2.o libass2_18CS30051.a
	@gcc -g  ass6_18CS30051_test2.o -o runtest2 -L. -lass2_18CS30051
ass6_18CS30051_test2.o: ass6_18CS30051_test2.s myl.h
	@gcc -g -Wall -c ass6_18CS30051_test2.s

runtest3: ass6_18CS30051_test3.o libass2_18CS30051.a
	@gcc -g  ass6_18CS30051_test3.o -o runtest3 -L. -lass2_18CS30051
ass6_18CS30051_test3.o: ass6_18CS30051_test3.s myl.h
	@gcc -g -Wall  -c ass6_18CS30051_test3.s

runtest4: ass6_18CS30051_test4.o libass2_18CS30051.a
	@gcc -g  ass6_18CS30051_test4.o -o runtest4 -L. -lass2_18CS30051
ass6_18CS30051_test4.o: ass6_18CS30051_test4.s myl.h
	@gcc -g -Wall  -c ass6_18CS30051_test4.s

runtest5: ass6_18CS30051_test5.o libass2_18CS30051.a
	@gcc -g  ass6_18CS30051_test5.o -o runtest5 -L. -lass2_18CS30051
ass6_18CS30051_test5.o: ass6_18CS30051_test5.s myl.h
	@gcc -g -Wall -c ass6_18CS30051_test5.s

output: output.o libass2_18CS30051.a
	@gcc -g  output.o -o output -L. -lass2_18CS30051
output.o: output.s myl.h
	@gcc -g -Wall -c output.s

run: 
		
	@./tinyC_compiler < ass6_18CS30051_test1.c > ass6_18CS30051_quad1.out
	@mv output.s ass6_18CS30051_test1.s
	@make runtest1
	
	@./tinyC_compiler < ass6_18CS30051_test2.c > ass6_18CS30051_quad2.out
	@mv output.s ass6_18CS30051_test2.s	
	@make runtest2

	@./tinyC_compiler < ass6_18CS30051_test3.c > ass6_18CS30051_quad3.out
	@mv output.s ass6_18CS30051_test3.s
	@make runtest3

	@./tinyC_compiler < ass6_18CS30051_test4.c > ass6_18CS30051_quad4.out
	@mv output.s ass6_18CS30051_test4.s
	@make runtest4

	@./tinyC_compiler < ass6_18CS30051_test5.c > ass6_18CS30051_quad5.out
	@mv output.s ass6_18CS30051_test5.s
	@make runtest5

	@echo ""
	@echo "COMMANDS FOR THE TEST CASES"
	@echo "1 : Calculate force                      : ./runtest1"
	@echo "2 : Convert Decimal Number to Binary     : ./runtest2"
	@echo "3 : Greatest Common Divisor Calculation  : ./runtest3"
	@echo "4 : nth Fibonacci Number                 : ./runtest4"
	@echo "5 : Rod Cutting Problem                  : ./runtest5"


clean:
	@rm ass6_18CS30051_test1.s\
	    ass6_18CS30051_test2.s\
		ass6_18CS30051_test3.s\
		ass6_18CS30051_test4.s\
		ass6_18CS30051_test5.s\
		runtest1\
		runtest2\
		runtest3\
		runtest4\
		runtest5\
		lex.yy.c\
		lex.yy.o\
		ass6_18CS30051.tab.c\
		ass6_18CS30051.tab.h\
		ass6_18CS30051.tab.o\
		ass6_18CS30051.output\
		ass6_18CS30051_translator.o\
		ass6_18CS30051_translator.h.gch\
		ass6_18CS30051_translator.o\
		ass6_18CS30051_target_translator.o\
		ass6_18CS30051_test1.o\
		ass6_18CS30051_test2.o\
		ass6_18CS30051_test3.o\
		ass6_18CS30051_test4.o\
		ass6_18CS30051_test5.o\
		libass2_18CS30051.a\
		ass2_18CS30051.o\
		ass6_18CS30051_quad1.out\
		ass6_18CS30051_quad2.out\
		ass6_18CS30051_quad3.out\
		ass6_18CS30051_quad4.out\
		ass6_18CS30051_quad5.out\
		tinyC_compiler