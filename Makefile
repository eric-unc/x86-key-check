.PHONY: clean

check: check.c
	gcc $< -o $@

clean:
	rm -f check

