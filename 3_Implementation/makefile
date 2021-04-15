PROJECT= all
TEST_PROJECT = Test_$(PROJECT)

SRC = src/search.c\
src/compare.c\
src/separate.c

TEST= resistor_test.c\
unity/unity.c
INC_H = inc
INCH_U = unity


#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJECT).$(EXEC)
	
run:
	$(PROJECT).$(EXEC)
	
test:
	gcc -I $(INC_H) -I (INC_U) $(TEST) $(SRC) -o $(TEST_PROJECT).$(EXEC)
	
cppcheck:
	cppcheck --enable = all $(SRC)
	
