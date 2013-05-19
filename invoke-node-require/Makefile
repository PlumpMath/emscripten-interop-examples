all: main.js main.html

main.html: main.cpp
	emcc --bind -o $@ $<

main.js: main.cpp
	emcc --bind -o $@ $<

.PHONY: run clean
run: main.js
	node $<

clean:
	rm -f main.js main.html
