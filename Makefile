CXX = g++ -std=c++11
CXXFLAGS = 


OBJ =                  \
  json_value.o         \
  json_stream.o        \
  json_stream__scan.o  \


all: $(OBJ) test_json


clean:
	$(RM) $(OBJ) test_json.o test_json



test_json: $(OBJ) test_json.o
	$(CXX) -o $@ $(OBJ) test_json.o




