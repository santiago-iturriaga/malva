include ../../../environment

all: MainLan MainSeq MainWan

clean:
	rm -f MainLan MainSeq MainWan *.o *% *~


MainLan: ES.req.o ES.pro.o MainLan.o
	$(CXX) $(LDFLAGS) $^ $(LOADLIBES) $(CPPFLAGS) -o $@

MainSeq: ES.req.o ES.pro.o MainSeq.o
	$(CXX) $(LDFLAGS) $^ $(LOADLIBES) $(CPPFLAGS) -o $@

MainWan: ES.req.o ES.pro.o MainWan.o
	$(CXX) $(LDFLAGS) $^ $(LOADLIBES) $(CPPFLAGS) -o $@

LAN:
	$(RUN)  -v  -p4pg pgfileLan MainLan
WAN:
	$(RUN)  -v  -p4pg pgfileWan MainWan
SEQ:
	./MainSeq ES.cfg ../../ProblemInstances/instance.txt res/res.txt
