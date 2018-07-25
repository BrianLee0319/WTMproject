DEPLOY_CODE=main.cpp mnist_cnn_Op.cpp
EXECUTABLE=net_exe
CFLAGS=-O0

all: $(EXECUTABLE)

$(EXECUTABLE): $(DEPLOY_CODE)
	g++ $(CFLAGS) -std=c++11 -o $@ $^

.PHONY: clean
clean: 
	rm -f $(EXECUTABLE)

