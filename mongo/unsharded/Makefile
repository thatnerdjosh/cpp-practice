CC=g++
FILES=./src/*

build: $(FILES)
	@$(CC) -std=c++17 -o build/app.out $(FILES) -I ./include -I /usr/include/mongocxx/v_noabi -I /usr/include/bsoncxx/v_noabi -lmongocxx -lbsoncxx

clean-run: build run
run:
	@./build/app.out
