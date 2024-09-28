LEX_FILE = tinyC2_22CS30028_22CS10008.l
C_FILE = tinyC2_22CS30028_22CS10008.c
BISON_FILE = tinyC2_22CS30028_22CS10008.y
BISON_OUTPUT = tinyC2_22CS30028_22CS10008.tab.c
LEX_OUTPUT = lex.yy.c
EXE = ./a.out
INPUT = tinyC2_22CS30028_22CS10008_test.c
OUTPUT_FILE = output.txt

all: clean compile run post_clean

clean:
	rm -f $(LEX_OUTPUT) $(EXE)

compile: $(LEX_FILE) $(C_FILE) $(BISON_FILE)
	bison -d $(BISON_FILE)
	flex $(LEX_FILE)
	gcc $(C_FILE) $(LEX_OUTPUT) $(BISON_OUTPUT)

run: $(EXE)
	./$(EXE) < $(INPUT) > $(OUTPUT_FILE)

post_clean:
	rm -f $(LEX_OUTPUT) $(EXE)