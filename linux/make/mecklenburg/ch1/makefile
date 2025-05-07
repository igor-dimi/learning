PROGS := count_words hello

all: $(PROGS)
	echo $(CC)

hello: hello.o
	$(CC) $^ -o $@

count_words: count_words.o lexer.o -lfl
	$(CC) $^ -o $@

lexer.c: lexer.l
	flex -t $< > $@

.PHONY: clean all
clean: 
	rm *.o lexer.c


