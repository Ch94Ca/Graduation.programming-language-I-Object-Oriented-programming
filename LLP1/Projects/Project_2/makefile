src = $(wildcard src/*.cpp)
obj = $(src:.cpp=.o)

CXXFLAGS = -std=c++11 -I include/ -g -lboost_serialization -lboost_locale

exe: $(obj)
	$(CXX) -g -o $@ $^ $(CXXFLAGS)
clean:
	rm -rf *o exe
	rm -rf src/*.o
