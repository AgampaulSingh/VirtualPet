CXX = c++

EXECUTABLE = petShop 
	
OBJS = VirtualPet.o Pokemon.o Digimon.o Pikachu.o Gatomon.o main.o
 
.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
