src = $(wildcard src/*.c)
obj = $(src:.c = .o)

CXXFLAGS = -Wall

exe: $(obj)
	$gcc -o $@ $^ $(CXXFLAGS)
clean:
	rm -rf *o exe
