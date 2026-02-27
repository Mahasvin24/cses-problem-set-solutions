CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
OUTDIR = compiled

$(OUTDIR):
	mkdir -p $(OUTDIR)

%: %.cpp | $(OUTDIR)
	$(CXX) $(CXXFLAGS) $< 
	./a.out

clean:
	rm -f *.o
