CC=g++
FILES=./src/*

build: $(FILES)
	@$(CC) -o build/app.out $(FILES) -I ./include

clean-run: build run
run:
	@./build/app.out
